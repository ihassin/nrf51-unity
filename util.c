#ifndef __UTIL_H__
#include "util.h"
#endif

void SetupTests()
{
    UnityBegin("main.c");
    init_leds();
}

void TeardownTests()
{
    UnityLEDEnd();
}

void init_leds()
{
    nrf_gpio_cfg_output(GREEN);
    nrf_gpio_cfg_output(RED);
}

void UnityLEDEnd()
{
    Unity.TestFailures ? nrf_gpio_pin_set(RED) : nrf_gpio_pin_set(GREEN);
    UnityEnd();
}
