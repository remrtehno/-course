// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <iomanip>


int main() {
    std::fstream in_file;
    std::ofstream out_file;
    
    std::string currLine = "";
    int lineNumber = 0;
    
    in_file.open("romeoandjuliet");
    out_file.open("romeoandjuliet_out.txt");
    
    if(!in_file || !out_file) {
        std::cout << "Error opening files" << std::endl;
        return 1;
    }
    
    
    while(std::getline(in_file, currLine)){
        if (currLine == "") {
            continue;
        }

        out_file << std::left << std::setw(6) << lineNumber++ << currLine << std::endl;
    }
    
    std::cout << "\nCopy complete" << std::endl;
    
    in_file.close();
    out_file.close();
    
    return 0;
}

