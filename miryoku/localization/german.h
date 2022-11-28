/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define LOC_CIRC GRAVE       // ^ (dead)
#define LOC_1    NUMBER_1    // 1
#define LOC_2    NUMBER_2    // 2
#define LOC_3    NUMBER_3    // 3
#define LOC_4    NUMBER_4    // 4
#define LOC_5    NUMBER_5    // 5
#define LOC_6    NUMBER_6    // 6
#define LOC_7    NUMBER_7    // 7
#define LOC_8    NUMBER_8    // 8
#define LOC_9    NUMBER_9    // 9
#define LOC_0    NUMBER_0    // 0
#define LOC_SS   MINUS       // ß
#define LOC_ACUT EQUAL       // ´ (dead)
// Row 2
#define LOC_Q    Q    // Q
#define LOC_W    W    // W
#define LOC_E    E    // E
#define LOC_R    R    // R
#define LOC_T    T    // T
#define LOC_Z    Y    // Z
#define LOC_U    U    // U
#define LOC_I    I    // I
#define LOC_O    O    // O
#define LOC_P    P    // P
#define LOC_UDIA LEFT_BRACKET  // Ü
#define LOC_PLUS RIGHT_BRACKET // +
// Row 3
#define LOC_A    A    // A
#define LOC_S    S    // S
#define LOC_D    D    // D
#define LOC_F    F    // F
#define LOC_G    G    // G
#define LOC_H    H    // H
#define LOC_J    J    // J
#define LOC_K    K    // K
#define LOC_L    L    // L
#define LOC_ODIA SEMICOLON// Ö
#define LOC_ADIA SINGLE_QUOTE// Ä
#define LOC_HASH NON_US_HASH// #
// Row 4
#define LOC_LABK NON_US_BACKSLASH// <
#define LOC_Y    Z    // Y
#define LOC_X    X    // X
#define LOC_C    C    // C
#define LOC_V    V    // V
#define LOC_B    B    // B
#define LOC_N    N    // N
#define LOC_M    M    // M
#define LOC_COMM COMMA // ,
#define LOC_DOT  PERIOD  // .
#define LOC_MINS SLASH// -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define LOC_DEG  LS(LOC_CIRC) // °
#define LOC_EXLM LS(LOC_1)    // !
#define LOC_DQUO LS(LOC_2)    // "
#define LOC_SECT LS(LOC_3)    // §
#define LOC_DLR  LS(LOC_4)    // $
#define LOC_PERC LS(LOC_5)    // %
#define LOC_AMPR LS(LOC_6)    // &
#define LOC_SLSH LS(LOC_7)    // /
#define LOC_LPRN LS(LOC_8)    // (
#define LOC_RPRN LS(LOC_9)    // )
#define LOC_EQL  LS(LOC_0)    // =
#define LOC_QUES LS(LOC_SS)   // ?
#define LOC_GRV  LS(LOC_ACUT) // ` (dead)
// Row 2
#define LOC_ASTR LS(LOC_PLUS) // *
// Row 3
#define LOC_QUOT LS(LOC_HASH) // '
// Row 4
#define LOC_RABK LS(LOC_LABK) // >
#define LOC_SCLN LS(LOC_COMM) // ;
#define LOC_COLN LS(LOC_DOT)  // :
#define LOC_UNDS LS(LOC_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ² │ ³ │   │   │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ @ │   │ € │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define LOC_SUP2 RA(LOC_2)    // ²
#define LOC_SUP3 RA(LOC_3)    // ³
#define LOC_LCBR RA(LOC_7)    // {
#define LOC_LBRC RA(LOC_8)    // [
#define LOC_RBRC RA(LOC_9)    // ]
#define LOC_RCBR RA(LOC_0)    // }
#define LOC_BSLS RA(LOC_SS)   // (backslash)
// Row 2
#define LOC_AT   RA(LOC_Q)    // @
#define LOC_EURO RA(LOC_E)    // €
#define LOC_TILD RA(LOC_PLUS) // ~
// Row 4
#define LOC_PIPE RA(LOC_LABK) // |
#define LOC_MICR RA(LOC_M)    // µ
