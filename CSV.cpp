/*
    CSV.cpp

    Definition of CSV class methods for access to CSV data
    
    Note: For demonstration purposes only of using a Wrapper
    * use strsep() instead 
    * if not, use strtok_r
*/

#include "CSV.hpp"
#include <cstring>

// constructor
CSV::CSV(std::function<bool(const std::string& value)> process)
    : process(process) {
}

// run the process on the CSV line
void CSV::run(const std::string& line) {

    // copy the line since strtok() modifies it
    char* const processLine = strdup(line.c_str());

    // apply the process to the first field of the CSV
    process(strtok(processLine, ","));
    while (auto value = strtok(NULL, ",")) {

        // apply the process to the next field of the CSV
        process(value);
    }

    // free the strdup() copy of the (modified) line
    free(processLine);
}
