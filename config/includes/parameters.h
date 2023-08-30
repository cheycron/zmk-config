#pragma once

// Layer Names
#define L_HOME 0
#define L_NUM 1
#define L_FUNC 2
#define L_EXT  3
#define L_MEDIA 4
#define L_MOVE 5
#define L_GAMING 6

// Settings
#define COMBO_HOOK global-quick-tap-ms = <150>;
#define COMBO_TERM_FAST 18
#define COMBO_TERM_SLOW 30
#define QUICK_TAP_MS 175
#define MT_CORE \
    flavor = "tap-preferred"; \
    tapping-term-ms = <220>; \
    quick-tap-ms = <220>; \
    hold-trigger-key-positions = <0>;

&mt { tapping-term-ms = <200>; quick_tap_ms = <0>; flavor = "tap-preferred"; };
&sk { release-after-ms = <900>; quick-release; };
&sl { ignore-modifiers; };
&lt { flavor = "balanced"; tapping-term-ms = <200>; quick-tap-ms = <QUICK_TAP_MS>; };
&mt { MT_CORE };
&caps_word { /delete-property/ ignore-modifiers; };

// Shortcuts
#define C_SELECT_ALL    LC(A)
#define C_SAVE          LC(S)
#define C_FIND          LC(F)
#define C_CUT           LC(X)
#define C_COPY          LC(C)
#define C_PASTE         LC(V)
#define C_UNDO          LC(Z)
#define C_REDO          LC(Y)
// mic mute maybe?

// Alias Definitions
#define NAV_LEFT  &mt_home 0   LEFT    // tap: left  | long-tap: beginning of line
#define NAV_RIGHT &mt_end 0    RIGHT   // tap: right | long-tap: end       of line
#define NAV_UP    &mt LC(HOME) UP      // tap: up    | long-tap: beginning of document
#define NAV_DOWN  &mt LC(END)  DOWN    // tap: down  | long-tap: end       of document
#define NAV_BSPC  &mt LC(BSPC) BSPC    // tap: bspc  | long-tap: delete word backward
#define NAV_DEL   &mt LC(DEL)  DEL     // tap: del   | long-tap: delete word forward

// Custom Functions
#define MASK_MODS(NAME, MODS, BINDING) \
    ZMK_BEHAVIOR(NAME, mod_morph, \
        bindings = <BINDING>, <BINDING>; \
        mods = <MODS>; \
    )
