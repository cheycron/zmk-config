#pragma once

// Layer Names
#define L_HOME 0
#define L_NUM 1
#define L_FUNC 2
#define L_EXT  3
#define L_MEDIA 4
#define L_GAMING 5

// Settings
&mt { tapping-term-ms = <200>; quick_tap_ms = <0>; flavor = "tap-preferred"; };
&lt { tapping-term-ms = <200>; quick_tap_ms = <0>; flavor = "tap-preferred"; };
&sk { release-after-ms = <500>; quick-release; };

// Shortcuts
#define C_SELECT_ALL LC(A)
#define C_SAVE  LC(S)
#define C_FIND  LC(F)
#define C_CUT LC(X)
#define C_COPY LC(C)
#define C_PASTE  LC(V)
#define C_UNDO  LC(Z)
#define C_REDO  LC(Y)
// mic mute maybe?

// Timeouts
#define SLOW_COMBO_TIMEOUT 40
#define FAST_COMBO_TIMEOUT 30
