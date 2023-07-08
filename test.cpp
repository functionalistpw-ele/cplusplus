#include <fstream>
#include <iostream>

int main() {
    std::ofstream fileOut("test.txt");
    if(fileOut.is_open()) {
        fileOut << "Hello, World!" << std::endl;
        fileOut.close();
    }

    std::string line;
    std::ifstream fileIn("test.txt");
    if (fileIn.is_open()) {
        while ( getline (fileIn,line) ) {
            std::cout << line << '\n';
        }
        fileIn.close();
    }

    return 0;
}
