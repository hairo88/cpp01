#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open input file." << std::endl;
        return 1;
    }

    std::ofstream tempFile("temp.txt");
    if (!tempFile.is_open()) {
        std::cerr << "Error: Could not create temporary file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = line.find(s1);
        while (pos != std::string::npos) {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos = line.find(s1, pos + s2.length());
        }
        tempFile << line << std::endl;
    }

    inputFile.close();
    tempFile.close();

    if (std::remove(filename.c_str()) != 0) {
        std::cerr << "Error: Could not remove original file." << std::endl;
        return 1;
    }

    if (std::rename("temp.txt", filename.c_str()) != 0) {
        std::cerr << "Error: Could not rename temporary file." << std::endl;
        return 1;
    }

    std::cout << "Replacement complete." << std::endl;
    return 0;
}