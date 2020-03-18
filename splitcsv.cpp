/*
    splitcsv.cpp

    Splits the string into separate csv words, output of one per line

    Note: For demonstration purposes only of using a Wrapper
    * use strsep() instead 
    * if not, use strtok_r
*/

#include <iostream>
#include "CSV.hpp"

int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <CSV Data>\n";
        exit(1);
    }

    // output each csv value on the argv[1] line
    CSV csv(
        [](const std::string& word) {
            std::cout << word << "\n";

            return true;
        }
    );
    csv.run(argv[1]);

    return 0;
}
