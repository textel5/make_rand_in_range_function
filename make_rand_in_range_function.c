/*
    make_rand_in_range_funtion makes a random random in needed range
    Copyright (C) 2021  Sergey Tokarev
....
    This file is part of make_rand_in_range.
    make_rand_in_range is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    listint is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with listint.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "make_rand_in_range_function.h"

#include <math.h>
#include <stdlib.h>

#include "../make_power_function/make_power_function.h"

/*integer var types only*/
#define MAKE_RAND_IN_RANGE_FUNCTION(TYPE) \
  TYPE TYPE ## _rand_in_range(const TYPE min, const TYPE max) \
  { \
    TYPE digit, places; \
    double log2num; \
    if (min > max) \
      return 0; \
    log2num = log2(max); \
    places = (TYPE)ceil(log2num); \
    do { \
      digit = (TYPE)(rand() % (int_power(10, places))); \
    } while (digit < min || digit > max); \
    return digit; \
  }

MAKE_RAND_IN_RANGE_FUNCTION(int)