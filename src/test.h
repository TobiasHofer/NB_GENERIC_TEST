#pragma once
#ifndef TEST_H
#define TEST_H

#define SARA_RST_PIN 26
#define SARA_PWR_ON_PIN 33
#define _NB_GENERIC_LOGLEVEL_         5
#define NB_RESETN                     SARA_RST_PIN
#define NB_PWR                        SARA_PWR_ON_PIN
#define UBLOX_USING_RESET_PIN         true
#define UBLOX_USING_POWER_ON_PIN      true
#define NB_MODEM_SARAR4               true
#define NB_USING_SOFTWARE_SERIAL      false
#define SerialNB   Serial1
#include "NB_Generic_Main.h"

#endif