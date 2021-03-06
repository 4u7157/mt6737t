/*
 * SM5701_charger.h
 * SiliconMitus SM5701 Charger Header
 *
 * Copyright (C) 2014 SiliconMitus
 *
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __SM5701_CHARGER_H
#define __SM5701_CHARGER_H __FILE__
#include <linux/mfd/core.h>
#include <linux/mfd/sm5701_core.h>
//#include "include/sec_charging_common.h"	temp
#include <linux/battery/sec_charging_common.h>

/* SM5701 Registers. */
#define SM5701_INT1			0x00
#define SM5701_INT2			0x01
#define SM5701_INT3			0x02
#define SM5701_INTMASK1		0x03
#define SM5701_INTMASK2		0x04
#define SM5701_INTMASK3		0x05
#define SM5701_STATUS1		0x06
#define SM5701_STATUS2		0x07
#define SM5701_STATUS3		0x08
#define SM5701_CNTL			0x09
#define SM5701_VBUSCNTL		0x0A
#define SM5701_CHGCNTL1		0x0B
#define SM5701_CHGCNTL2		0x0C
#define SM5701_CHGCNTL3		0x0D
#define SM5701_CHGCNTL4		0x0E

#define SM5701_FLEDCNTL1	0x0F
#define SM5701_FLEDCNTL2	0x10
#define SM5701_FLEDCNTL3	0x11
#define SM5701_FLEDCNTL4	0x12
#define SM5701_FLEDCNTL5	0x13
#define SM5701_FLEDCNTL6	0x14
#define SM5701_DEVICE_ID       0x15

#define BATREG_MASK			0x00

//INT1
#define SM5701_INT1_AICL		0x01
#define SM5701_INT1_BATOVP		0x02
#define SM5701_INT1_VBUSOK		0x04
#define SM5701_INT1_VBUSUVLO	0x08
#define SM5701_INT1_VBUSOVP		0x10
#define SM5701_INT1_VBUSLIMIT	0x20
#define SM5701_INT1_CHGRSTF		0x40
#define SM5701_INT1_NOBAT		0x80
//INT2
#define SM5701_INT2_TOPOFF		0x01
#define SM5701_INT2_DONE		0x02
#define SM5701_INT2_FASTTMROFF	0x04
#define SM5701_INT2_CHGON		0x08
//INT3
#define SM5701_INT3_THEMSHDN	0x01
#define SM5701_INT3_THEMREG		0x02
#define SM5701_INT3_FLEDSHORT	0x04
#define SM5701_INT3_FLEDOPEN	0x08
#define SM5701_INT3_BOOSTPOK_NG	0x10
#define SM5701_INT3_BOOSTPOK	0x20
#define SM5701_INT3_AMSTMROFF	0x40
#define SM5701_INT3_LOWBATT		0x80
//INTMSK1
#define SM5701_INTMSK1_AICLM		0x01
#define SM5701_INTMSK1_BATOVPM		0x02
#define SM5701_INTMSK1_VBUSOKM		0x04
#define SM5701_INTMSK1_VBUSUVLOM	0x08
#define SM5701_INTMSK1_VBUSOVPM		0x10
#define SM5701_INTMSK1_VBUSLIMITM	0x20
#define SM5701_INTMSK1_CHGRSTFM		0x40
#define SM5701_INTMSK1_NOBATM		0x80
//INTMSK2
#define SM5701_INTMSK2_TOPOFFM		0x01
#define SM5701_INTMSK2_DONEM		0x02
#define SM5701_INTMSK2_FASTTMROFFM	0x04
#define SM5701_INTMSK2_CHGONM		0x08
//INTMSK3
#define SM5701_INTMSK3_THEMSHDNM	0x01
#define SM5701_INTMSK3_THEMREGM		0x02
#define SM5701_INTMSK3_FLEDSHORTM	0x04
#define SM5701_INTMSK3_FLEDOPENM	0x08
#define SM5701_INTMSK3_BOOSTPOK_NGM	0x10
#define SM5701_INTMSK3_BOOSTPOKM	0x20
#define SM5701_INTMSK3_AMSTMROFFM	0x40
#define SM5701_INTMSK3_LOWBATTM		0x80
//STATUS1
#define SM5701_STATUS1_AICL				0x01
#define SM5701_STATUS1_BATOVP			0x02
#define SM5701_STATUS1_VBUSOK			0x04
#define SM5701_STATUS1_VBUSUVLO			0x08
#define SM5701_STATUS1_VBUSOVP			0x10
#define SM5701_STATUS1_VBUSLIMIT		0x20
#define SM5701_STATUS1_CHGRSTF			0x40
#define SM5701_STATUS1_NOBAT			0x80
//STATUS2
#define SM5701_STATUS2_TOPOFF			0x01
#define SM5701_STATUS2_DONE				0x02
#define SM5701_STATUS2_FASTTMROFF		0x04
#define SM5701_STATUS2_CHGON			0x08
//STATUS3
#define SM5701_STATUS3_THEMSHDN	        0x01
#define SM5701_STATUS3_THEMREG		    0x02
#define SM5701_STATUS3_FLEDSHORT		0x04
#define SM5701_STATUS3_FLEDOPEN			0x08
#define SM5701_STATUS3_BOOSTPOK_NG	    0x10
#define SM5701_STATUS3_BOOSTPOK		    0x20
#define SM5701_STATUS3_ABSTMROFF		0x40
#define SM5701_STATUS3_LOWBATT			0x80
//CNTL
#define SM5701_CNTL_OPERATIONMODE		0x07
#define SM5701_CNTL_RESET				0x08
#define SM5701_CNTL_OVPSEL				0x30
#define SM5701_CNTL_FREQSEL				0xc0
#define SM5701_RESET                           0x1
//VBUSCNTL
#define SM5701_VBUSCNTL_VBUSLIMIT		0x07
#define SM5701_VBUSCNTL_AICLTH			0x38
#define SM5701_VBUSCNTL_AICLEN			0x40

//CHGCNTL1
#define SM5701_CHGCNTL1_TOPOFF          0x0F
#define SM5701_CHGCNTL1_AUTOSTOP        0x10
#define SM5701_CHGCNTL1_HSSLPCTRL       0x60

//CHGCNTL2
#define SM5701_CHGCNTL2_FASTCHG			0x3F

//CHGCNTL3
#define SM5701_CHGCNTL3_BATREG			0x1F

//CHGCNTL4
#define SM5701_CHGCNTL4_TOPOFFTIMER		0x03
#define SM5701_CHGCNTL4_FASTTIMER		0x0B

#define SM5701_STATUS1_NOBAT_SHIFT 7

/* Enable charger Operation Mode */
#define OP_MODE_CHG_ON 0x02

/* Disable charger Operation Mode */
#define OP_MODE_CHG_OFF 0x01

#define FREQ_15				(0x00 << 6)
#define FREQ_12				(0x01 << 6)
#define FREQ_18                         (0x02 << 6)
#define FREQ_24                         (0x03 << 6)

#if defined(CONFIG_CHARGER_SM5701)
struct SM5701_charger_data {
	struct SM5701_dev *SM5701;
	struct power_supply	psy_chg;
	struct power_supply	psy_otg;
	struct delayed_work	isr_work;

	unsigned int	is_charging;
	unsigned int	nchgen;
	unsigned int	charging_type;
	unsigned int	battery_state;
	unsigned int	battery_present;
	unsigned int	cable_type;
	unsigned int	charging_current_max;
	unsigned int	charging_current;
	unsigned int	input_current_limit;
	unsigned int	vbus_state;
	bool is_fullcharged;
	int		aicl_on;
	int		status;
	int siop_level;
	int		input_curr_limit_step;
	int		charging_curr_step;
        int             dev_id;

	sec_battery_platform_data_t	*pdata;
};
#endif

struct SM5701_platform_data {
	unsigned int irq;
	unsigned int chgen;
	struct SM5701_charger_data *charger_data;
};

enum {
	POWER_SUPPLY_VBUS_UNKNOWN = 0,
	POWER_SUPPLY_VBUS_UVLO,
	POWER_SUPPLY_VBUS_WEAK,
	POWER_SUPPLY_VBUS_OVLO,
	POWER_SUPPLY_VBUS_GOOD,
};

#endif /* __SM5701_CHARGER_H */

