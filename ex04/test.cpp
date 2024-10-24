#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not create file " << filename + ".replace" << std::endl;
        return 1;
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not create file " << filename + ".replace" << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = line.find(s1);
        while (pos != std::string::npos) //std::string::nposが意味わからない
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos = line.find(s1, pos + s2.length());
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Replacement complete." << std::endl;
    return 0;
}
