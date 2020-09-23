// SPDX-License-Identifier: GPL-3.0-only

#include <board/config.h>

#include <board/battery.h>
#include <board/kbled.h>
#include <common/debug.h>

/**
 * Reset the EC configuration data.
 */
void confing_reset(void) {
    battery_reset();
    kbled_reset();
    INFO("Reset configuration\n");
}
