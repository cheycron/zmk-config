#pragma once

// Layer Names
#define L_HOME 0
#define L_NUM 1
#define L_FUNC 2
#define L_EXT  3
#define L_MEDIA 4
#define L_MOVE 5
#define L_GAMING 6
#define L_MOUSE 7

// Key Groups
#define KEYS_L LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4 LB5
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4 RB5
#define KEYS_T LH2 LH1 LH0 RH0 RH1 RH2

// Settings
#define COMBO_HOOK global-quick-tap-ms = <150>;
#define COMBO_TERM_FAST 18
#define COMBO_TERM_SLOW 30
#define QUICK_TAP_MS 160
#define HM_TAPPING_TERM 300
#define HM_TAPPING_TERM_FAST 200
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
#define C_SELECT_ALL           &kp LC(A)
#define C_SAVE                 &kp LC(S)
#define C_FIND                 &kp LC(F)
#define C_CUT                  &kp LC(X)
#define C_COPY                 &kp LC(C)
#define C_PASTE                &kp LC(V)
#define C_UNDO                 &kp LC(Z)
#define C_REDO                 &kp LC(Y)
#define C_CTRLENT              &kp LC(ENTER)
#define C_COMMAND              &kp LC(LS(P))
#define C_FILES                &kp LC(P)
#define C_FORMAT               &kp LS(LA(F))
#define C_CARET                &kp LS(LA(I))
#define C_WCLOSE               &kp LA(F4)
#define C_WPREV                &kp LS(TAB)
#define C_WNEXT                &swapper
#define C_TCLOSE               &kp LC(F4)
#define C_TPREV                &kp LC(PG_UP)
#define C_TNEXT                &kp LC(PG_DN)
#define C_TSKMGR               &kp LC(LS(ESC))
#define C_DVIEW                &kp LG(TAB)
#define C_DADD                 &kp LG(LC(D))
#define C_DPREV                &kp LG(LC(LEFT))
#define C_DNEXT                &kp LG(LC(RIGHT))
#define C_DCLOSE               &kp LG(LC(F4))
