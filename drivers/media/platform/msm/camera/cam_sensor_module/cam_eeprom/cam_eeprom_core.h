/* Copyright (c) 2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
/*
 * NOTE: This file has been modified by Sony Mobile Communications Inc.
 * Modifications are Copyright (c) 2017 Sony Mobile Communications Inc,
 * and licensed under the license of the file.
 */
#ifndef _CAM_EEPROM_CORE_H_
#define _CAM_EEPROM_CORE_H_

#include "cam_eeprom_dev.h"

int32_t cam_eeprom_driver_cmd(struct cam_eeprom_ctrl_t *e_ctrl, void *arg);
int32_t cam_eeprom_parse_read_memory_map(struct device_node *of_node,
	struct cam_eeprom_ctrl_t *e_ctrl);
/**
 * @e_ctrl: EEPROM ctrl structure
 *
 * This API handles the shutdown ioctl/close
 */
void cam_eeprom_shutdown(struct cam_eeprom_ctrl_t *e_ctrl);

#endif
/* _CAM_EEPROM_CORE_H_ */
