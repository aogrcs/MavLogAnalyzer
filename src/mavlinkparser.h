/**
 * @file mavlinkparser.h
 * @brief Allows to access a single Mavlink logfile
 * @author Martin Becker <becker@rcs.ei.tum.de>
 * @date 18.04.2014
 
    This file is part of MavLogAnalyzer, Copyright 2014 by Martin Becker.
    
    MavLogAnalyzer is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    
 */

#ifndef MAVLINKPARSER_H
#define MAVLINKPARSER_H

#include <stdio.h>
#include <inttypes.h>
#include <string>
#include "mavlink.h" // generated by mavgenerate.py from https://github.com/mavlink/mavlink.git


class MavlinkParser {
public:
    MavlinkParser(std::string filename);
    ~MavlinkParser();
    bool get_next_msg(mavlink_message_t &buf);
    const mavlink_status_t* get_linkstats(void) const;
    const std::string& get_filename(void) const;

    /****************************************
     *     DATA MEMBERS
     ****************************************/
    bool  valid; //< indicates error

private:
    bool _file_open(void);

    /****************************************
     *     DATA MEMBERS
     ****************************************/
    // general
    FILE*       _fp;
    std::string _filename;
    // stats
    unsigned int     _n_msg;
    mavlink_status_t _r_mavlink_status;
};

#endif // MAVLINKPARSER_H