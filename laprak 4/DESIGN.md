---
name: Editorial Emerald Archive
colors:
  surface: '#f9f9ff'
  surface-dim: '#cfdaf2'
  surface-bright: '#f9f9ff'
  surface-container-lowest: '#ffffff'
  surface-container-low: '#f0f3ff'
  surface-container: '#e7eeff'
  surface-container-high: '#dee8ff'
  surface-container-highest: '#d8e3fb'
  on-surface: '#111c2d'
  on-surface-variant: '#3d4a42'
  inverse-surface: '#263143'
  inverse-on-surface: '#ecf1ff'
  outline: '#6d7a72'
  outline-variant: '#bccac0'
  surface-tint: '#006c4a'
  primary: '#006948'
  on-primary: '#ffffff'
  primary-container: '#00855d'
  on-primary-container: '#f5fff7'
  inverse-primary: '#68dba9'
  secondary: '#006a63'
  on-secondary: '#ffffff'
  secondary-container: '#99efe5'
  on-secondary-container: '#006f67'
  tertiary: '#006194'
  on-tertiary: '#ffffff'
  tertiary-container: '#007bb9'
  on-tertiary-container: '#fdfcff'
  error: '#ba1a1a'
  on-error: '#ffffff'
  error-container: '#ffdad6'
  on-error-container: '#93000a'
  primary-fixed: '#85f8c4'
  primary-fixed-dim: '#68dba9'
  on-primary-fixed: '#002114'
  on-primary-fixed-variant: '#005137'
  secondary-fixed: '#9cf2e8'
  secondary-fixed-dim: '#80d5cb'
  on-secondary-fixed: '#00201d'
  on-secondary-fixed-variant: '#00504a'
  tertiary-fixed: '#cce5ff'
  tertiary-fixed-dim: '#93ccff'
  on-tertiary-fixed: '#001d31'
  on-tertiary-fixed-variant: '#004b73'
  background: '#f9f9ff'
  on-background: '#111c2d'
  surface-variant: '#d8e3fb'
typography:
  headline-xl:
    fontFamily: Plus Jakarta Sans
    fontSize: 36px
    fontWeight: '700'
    lineHeight: 44px
    letterSpacing: -0.02em
  headline-xl-mobile:
    fontFamily: Plus Jakarta Sans
    fontSize: 28px
    fontWeight: '700'
    lineHeight: 36px
    letterSpacing: -0.01em
  headline-lg:
    fontFamily: Plus Jakarta Sans
    fontSize: 28px
    fontWeight: '600'
    lineHeight: 36px
    letterSpacing: -0.015em
  headline-lg-mobile:
    fontFamily: Plus Jakarta Sans
    fontSize: 22px
    fontWeight: '600'
    lineHeight: 28px
    letterSpacing: -0.01em
  headline-md:
    fontFamily: Plus Jakarta Sans
    fontSize: 20px
    fontWeight: '600'
    lineHeight: 28px
  headline-sm:
    fontFamily: Plus Jakarta Sans
    fontSize: 16px
    fontWeight: '600'
    lineHeight: 24px
  body-lg:
    fontFamily: Plus Jakarta Sans
    fontSize: 16px
    fontWeight: '400'
    lineHeight: 24px
  body-md:
    fontFamily: Plus Jakarta Sans
    fontSize: 14px
    fontWeight: '400'
    lineHeight: 20px
  body-sm:
    fontFamily: Plus Jakarta Sans
    fontSize: 12px
    fontWeight: '400'
    lineHeight: 16px
  label-lg:
    fontFamily: Plus Jakarta Sans
    fontSize: 14px
    fontWeight: '600'
    lineHeight: 20px
    letterSpacing: 0.01em
  label-md:
    fontFamily: Plus Jakarta Sans
    fontSize: 12px
    fontWeight: '600'
    lineHeight: 16px
    letterSpacing: 0.02em
  label-sm:
    fontFamily: Plus Jakarta Sans
    fontSize: 11px
    fontWeight: '600'
    lineHeight: 14px
    letterSpacing: 0.04em
rounded:
  sm: 0.25rem
  DEFAULT: 0.5rem
  md: 0.75rem
  lg: 1rem
  xl: 1.5rem
  full: 9999px
spacing:
  gutter: 1.5rem
  gutter-mobile: 0.75rem
  margin: 2rem
  margin-mobile: 1rem
  space-xs: 0.25rem
  space-sm: 0.5rem
  space-md: 1rem
  space-lg: 1.5rem
  space-xl: 2.5rem
---

## Brand & Style
The design system reflects a curated, high-efficiency editorial dashboard designed for managing and archiving collegiate organization media. It merges Modern SaaS utility with restrained Scandinavian minimalism, prioritizing high content legibility, swift visual scanning, and organizational clarity.

The emotional tone balances institutional credibility with student vibrancy: structured, calm, and frictionless. Surfaces remain quiet to allow colorful social media previews, photography, and publication metrics to command immediate attention. Subtle architectural framing through thin, precise borders replaces heavy elevations or decorative noise.

## Colors
The palette leverages a crisp, refreshing emerald theme anchored by deep charcoal typography and airy slate backgrounds.

- **Primary (`#059669`)**: Core interactive states, active navigation indicators, key primary actions, and confirmed published statuses.
- **Secondary (`#0F766E`)**: Deep teal used for specialized media taxonomy, focused tags, and secondary action highlights.
- **Tertiary (`#0284C7`)**: Clear sky blue reserved for external links, Instagram sync badges, and live scheduling highlights.
- **Neutral (`#1E293B`)**: High-contrast slate charcoal ensuring WCAG AAA legibility across all primary text elements.
- **Surface Foundations**: Canvas sits at `#F8FAFC`, card containers and interactive panels at pure `#FFFFFF`, accompanied by structural dividing strokes at `#E2E8F0` and muted secondary text at `#64748B`.

## Typography
Plus Jakarta Sans serves as the single font family across the interface, imparting a contemporary, friendly, yet rigorous administrative demeanor. 

- **Display & Headings**: Tighter negative tracking (`-0.01em` to `-0.02em`) provides punchy visual grouping for article headers, batch counts, and analytics summaries.
- **Data & Metadata**: Dense information (post timestamps, captions, engagement metrics) is anchored in `body-md` and `body-sm` with standard tracking to maintain sustained legibility during long moderation sessions.
- **Labels & Microcopy**: Format badges, pill tags, and table headers adopt uppercase or semi-bold lowercase styles with widened letter-spacing (`0.01em` to `0.04em`) to establish visual separation against descriptive content.

## Layout & Spacing
The layout follows a fluid-responsive 12-column grid system resting inside a constrained max-width shell of 1440px.

- **Desktop (1024px+)**: 12-column structure with fixed 240px or collapsible 72px left navigation rail, 24px (`1.5rem`) gutters, and 32px (`2rem`) page margins.
- **Tablet (768px - 1023px)**: 8-column layout with 16px gutters and 24px margins; secondary panels stack beneath media grids.
- **Mobile (< 768px)**: 4-column layout with 12px (`0.75rem`) gutters, 16px (`1rem`) outer margins, converting side-by-side post inspection panels into modal bottom-sheets.
- **Spatial Rhythm**: Internal card content utilizes strict base-4 multipliers: 4px (`space-xs`) for inline icon-label gaps, 8px (`space-sm`) for grouped metadata elements, 16px (`space-md`) for card container interior padding, and 24px (`space-lg`) for major content partitions.

## Elevation & Depth
This design system rejects heavy dropshadows in favor of crisp, low-contrast outlines combined with shallow ambient layering:

- **Level 0 (Canvas Base)**: `#F8FAFC` flat surface.
- **Level 1 (Cards, Tables, Panels)**: `#FFFFFF` background bound by a 1px solid border of `#E2E8F0`. Shadow is minimal: `0 1px 2px 0 rgba(15, 23, 42, 0.04)`.
- **Level 2 (Hover States, Action Menus, Dropdowns)**: Elevated `#FFFFFF` surface maintaining the 1px stroke (`#CBD5E1`) paired with an ambient tinted shadow: `0 4px 12px -2px rgba(15, 23, 42, 0.06), 0 2px 6px -1px rgba(15, 23, 42, 0.03)`.
- **Level 3 (Inspection Drawers & Modal Dialogs)**: High-focus surfaces with `0 16px 32px -4px rgba(15, 23, 42, 0.08)` backed by a frosted veil overlay (`rgba(15, 23, 42, 0.4)` with 4px backdrop blur).

## Shapes
A dual-radius geometry governs the system to differentiate structural containers from interactive chips:

- **Structural Components (Cards, Modals, Inputs)**: Grounded with an 8px (`0.5rem`) to 12px (`0.75rem`) radius, providing a crisp, modern finish that neatly mirrors standard media aspect ratios.
- **Pill Badges & Chips**: Rendered with fully circular pill radii (`9999px`), contrasting clearly against rectangular Instagram preview thumbnails and card containers.
- **Thumbnails & Media Containers**: Clamped strictly to 8px to keep Instagram grid previews sharp and architectural.

## Components

### Buttons
- **Primary**: Solid emerald background (`#059669`), white text, 8px radius, height 40px, padding 0 16px. Hover state shifts to `#047857`. Focus ring: 2px solid `#A7F3D0` with 2px offset.
- **Secondary / Outlined**: White background, 1px solid `#E2E8F0`, charcoal text (`#1E293B`). Hover shifts background to `#F1F5F9`.
- **Destructive**: White background with red outline (`#FCA5A5`) or solid `#DC2626` for confirmed deletion actions.

### Badges & Pill Chips
- **Status (Published, Draft, Scheduled)**:
  - *Published*: Background `#ECFDF5`, text `#047857`, 1px solid `#A7F3D0`.
  - *Draft*: Background `#F1F5F9`, text `#475569`, 1px solid `#CBD5E1`.
  - *Scheduled*: Background `#F0F9FF`, text `#0369A1`, 1px solid `#BAE6FD`.
- **Format Indicators (Carousel, Reel, Single, Story)**:
  - Strict pill shape (`9999px`), height 24px, 8px horizontal padding, accompanied by a 14px leading icon.

### Form Inputs & Filters
- **Text Inputs & Search**: Pure white background, 1px solid `#E2E8F0`, 8px radius, height 40px. On focus, transition border to `#059669` with a subtle emerald glow (`0 0 0 3px rgba(5, 150, 105, 0.12)`).
- **Select Dropdowns**: Styled identically to text fields, featuring an embedded trailing slate chevron.

### Selection Controls
- **Checkboxes**: 18px square, 4px border radius. Unchecked: 1.5px solid `#CBD5E1`, background white. Checked: solid `#059669` fill with a centered white check icon.
- **Radio Buttons**: 18px circle. Checked displays a solid `#059669` border with a centered 8px emerald dot.

### Content Cards & Grid Modules
- **Post Archive Card**: White surface, 1px border `#E2E8F0`, 12px corner radius. Includes a top 1:1 or 4:5 image container with 8px internal inset or flush border, floating format badge top-right, followed by title, caption excerpt, engagement counters (likes, comments), and an avatar row. Hover triggers Level 2 elevation and light border emphasis (`#CBD5E1`).

### List & Table Views
- **Compact Archive Row**: Height 52px, alternating or border-divided (`#F1F5F9`). Contains a 40x40 thumbnail, title, caption preview, status pill badge, post date, and a trailing quick-action kebab menu.