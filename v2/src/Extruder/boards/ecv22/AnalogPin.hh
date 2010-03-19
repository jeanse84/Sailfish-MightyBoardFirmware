/*
 * Copyright 2010 by Adam Mayer	 <adam@makerbot.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef BOARDS_ECV22_ANALOG_PIN_HH_
#define BOARDS_ECV22_ANALOG_PIN_HH_

#include <stdint.h>

void initAnalogPins(uint8_t bitmask);

void startAnalogRead(uint8_t pin, volatile uint16_t* destination);


#endif /* BOARDS_ECV22_ANALOG_PIN_HH_ */
