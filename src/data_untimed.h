/**
 * @file data_untimed.h
 * @brief superclass for all untimed kind of data
 * @author Martin Becker <becker@rcs.ei.tum.de>
 * @date 7/4/2017

    This file is part of MavLogAnalyzer, Copyright 2017 by Martin Becker.

    MavLogAnalyzer is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.

 */
#ifndef DATA_UNTIMED_H
#define DATA_UNTIMED_H

#include "data.h"

/**
 * @brief additional interface for all untimed kind of data
 */
class DataUntimed : public Data {
public:
    // CTOR
    DataUntimed(std::string name) : Data(name) { }

    // copy CTOR
    DataUntimed(const Data & other) : Data(other) { }

};

#endif // DATA_UNTIMED_H
