/*
    splitcsv.cpp

    Splits the string into separate csv words, output of one per line

    Note: For demonstration purposes only of using a Wrapper
    * use strsep() instead 
    * if not, use strtok_r
*/

#include <cstring>
#include <iostream>

int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <CSV Data>\n";
        exit(1);
    }

    // copy line because strtok() alters it
    char* line = strdup(argv[1]);

    // CSV separator
    const char* separator = ",";

    for (const char* word = strtok(line, separator); word; word = strtok(NULL, separator)) {
        std::cout << word << "\n";
    }

    // free copied line
    free(line);

    return 0;
}
