/*
    CSV.cpp

    Definition of CSV class methods for access to CSV data
*/

#include "CSV.hpp"
#include <cstring>

// constructor
CSV::CSV(const std::string& line) : line(strdup(line.c_str())) {
}

// next value in the CSV line
const char* CSV::next() {

    if (strtokFirst) {
        strtokFirst = false;
        return strtok(line, ",");
    } else {

        return strtok(NULL, ",");
    }
}

// destructor
CSV::~CSV() {
    free(line);
}
