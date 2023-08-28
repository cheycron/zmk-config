#pragma once

// Layer Names
#define LAYER_HOME 0
#define LAYER_FUNC 1
#define LAYER_EXT 2
#define LAYER_MEDIA 3
#define LAYER_GAMING 4

// Settings
&mt { tapping-term-ms = <200>; quick_tap_ms = <0>; flavor = "tap-preferred"; };
&lt { tapping-term-ms = <200>; quick_tap_ms = <0>; flavor = "tap-preferred"; };
&sk { release-after-ms = <500>; quick-release; };

// Shortcuts
#define C_UNDO LG(Z)
#define C_REDO LS(LG(Z))
#define C_CUT LG(X)
#define C_COPY LG(C)
#define C_PASTE LG(V)

// Timeouts
#define SLOW_COMBO_TIMEOUT 40
#define FAST_COMBO_TIMEOUT 30
