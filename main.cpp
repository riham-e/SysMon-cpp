#include <iostream>
#include "C:\Users\HP\Desktop\SysMon-cpp\utils\FileUtils.h"

int main() {
    std::vector<std::string> lines = FileUtils::readFileLines("test.txt");

    for (const auto& line : lines) {
        std::cout << line << std::endl;
    }

    return 0;
}
