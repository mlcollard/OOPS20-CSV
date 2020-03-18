/*
    CSV.hpp

    Declaration of CSV class for access to CSV data
*/

#ifndef INCLUDED_CSV_HPP
#define INCLUDED_CSV_HPP

#include <string>
#include <functional>

class CSV {
public:
    // constructor
    CSV(std::function<bool(const std::string& value)> process);

    // run the process on the CSV line
    void run(const std::string& line);

private:
    // process applied to every field in the CSV data
    std::function<bool(const std::string& value)> process;
};

#endif
