# Egstad's Idobo

## LEDs
By default, LEDs are enabled. There is a short bootup animation (`bootupAnimation()`) to indicate that the keyboard has powered up correctly.

On each keypress, the LEDs hue increases. This increase is determined the the `RGBLIGHT_HUE_STEP` value, which is assigned in `../config.h` (parent idobo directory). My local copy has this value set to `1`, so the incremental color shift is rather slow.
