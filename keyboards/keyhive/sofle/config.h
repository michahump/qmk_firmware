#pragma once

#include "config_common.h"

#ifdef RGBLIGHT_ENABLE

//Add RGB underglow
#define RGB_DI_PIN D3
#define RGBLED_NUM 74
#define RGBLED_SPLIT {37,37}
#define RGBLIGHT_SLEEP

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_STATIC_GRADIENT

//50% brightness to avoid crashing
#define RGBLIGHT_LIMIT_VAL 128

#endif
