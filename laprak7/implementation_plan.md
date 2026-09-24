# Penyelesaian Alur Latihan Soal & Penyimpanan Riwayat

Rencana ini akan merealisasikan siklus penuh fitur "Latihan Soal". Setelah siswa memilih subtes dan mengerjakan soal, jawabannya akan divalidasi, diberikan skor, dan diarsipkan sebagai riwayat di _database_ Supabase. XP dan Poin siswa juga akan otomatis ditambahkan jika berhasil.

## Proposed Changes

---

### Eloquent Models

#### [NEW] app/Models/Pengerjaan.php
Model ini mewakili setiap sesi Latihan/Simulasi yang diambil pengguna.
- Terhubung ke tabel `pengerjaan`.
- Menggunakan pendekatan UUID (`HasUuids`, `$incrementing = false`, `$keyType = 'string'`).
- Mendefinisikan kolom _fillable_: `user_id`, `tipe`, `status`, `subtes_id`, `jumlah_soal_dipilih`, `ice_breaking_aktif`, `try_out_id`, `started_at`, `finished_at`, `total_skor`.
- Memiliki relasi ke `JawabanPengerjaan`, `Subtes`, dan `User`.

#### [NEW] app/Models/JawabanPengerjaan.php
Model ini menyimpan riwayat opsi yang dipilih untuk tiap soal pada satu sesi Pengerjaan.
- Terhubung ke tabel `jawaban_pengerjaan`.
- Menggunakan UUID dengan tanpa timestamps bawaan Laravel (`public $timestamps = false;`).
- Mendefinisikan kolom _fillable_: `pengerjaan_id`, `pengerjaan_subtes_id`, `soal_id`, `opsi_dipilih_id`, `jawaban_isian`, `is_correct`, `skor`, `waktu_menjawab`.
- Memiliki relasi ke `Pengerjaan`, `Soal`, dan `OpsiJawaban`.

---

### Backend Logic

#### [MODIFY] routes/web.php
Memusatkan seluruh rute terkait Latihan Soal (dari `/latihan` hingga `/latihan/hasil`) ke `LatihanSoalController`. 

#### [MODIFY] app/Http/Controllers/LatihanSoalController.php
1. **Method `ujian()`**: 
   Memastikan relasi _opsi_ ditarik dengan klausa `orderBy('urutan')` secara implisit atau eksplisit sesuai model.
2. **Method `simpanJawaban(Request $request)` (BARU)**: 
   - Menerima _request_ berupa _array_ jawaban serta parameter aksi (keluar/selesai).
   - Memanfaatkan fitur `DB::transaction` secara ketat.
   - Menginisialisasi baris di tabel `pengerjaan`.
   - Mengiterasi jawaban yang dikirimkan, mencocokkannya dengan kunci jawaban di tabel `opsi_jawaban`. 
   - Jika benar, berikan skor 10. Jika salah, berikan skor 0.
   - Menambahkan XP (+15 per jawaban benar + 10 dasar) dan Poin Siswa ke tabel `siswa`.
   - Melakukan fungsi _redirect_ Inertia.js (alih-alih respon JSON) ke halaman `/latihan/hasil`.
3. **Method `hasil(Request $request)` (BARU)**:
   - Menarik data `Pengerjaan` (lengkap beserta riwayatnya).
   - Menghitung kalkulasi XP, Poin, jumlah benar, dan salah secara dinamis untuk ditransfer ke _frontend_ menggunakan `Inertia::render()`.

---

### Frontend UI

#### [MODIFY] resources/js/Pages/Latihan/Ujian.tsx
- Pada _method_ `kirimJawaban(tujuan: string)`, _payload_ pengiriman diformat agar memuat parameter tambahan `aksi: 'keluar' | 'selesai'`.
- Mengandalkan fungsi bawaan Inertia.js untuk pengalihan navigasi pasca-submit agar _frontend_ secara mulus mengikuti perintah `redirect()` yang diberikan Laravel setelah operasi transaksi _database_ sukses.

## Verification Plan

### Automated Tests
1. `npm run build` untuk memverifikasi bahwa injeksi parameter pada TypeScript tidak menyebabkan galat.

### Manual Verification
1. Lakukan satu siklus pengerjaan soal secara menyeluruh di UI, klik **Selesaikan Sekarang** atau **Simpan Jawaban**.
2. Pastikan diarahkan ke halaman `/latihan/hasil` dan parameter kalkulasi *XP/Skor/Benar/Salah* merender angka yang realistis.
3. Periksa panel _Dashboard_ untuk melihat penambahan XP di profil secara kasat mata.
