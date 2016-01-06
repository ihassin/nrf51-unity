#ifndef __UTIL_H__
#define __UTIL_H__

#define RUN_TEST(func) UnityDefaultTestRun(func, #func, __LINE__)

#include "unity.h"
#include "nrf_gpio.h"
#include "boards.h"

void SetupTests();
void TeardownTests();
void init_leds();
void UnityLEDEnd();

#define GREEN   LED_1
#define RED     LED_2

#endif
