/*
    CSV.hpp

    Declaration of CSV class for access to CSV data
*/

#ifndef INCLUDED_CSV_HPP
#define INCLUDED_CSV_HPP

#include <string>

class CSV {
public:
    // constructor
    CSV(const std::string& line);

    // next value in the CSV line
    const char* next();

    // destructor
    ~CSV();

private:
    // line of csv data
    char * const line = nullptr;

    // first call to strtok()
    bool strtokFirst = true;
};

#endif
