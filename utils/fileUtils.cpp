#include "FileUtils.h"
#include <fstream>
#include <iostream>

std::vector<std::string> FileUtils::readFileLines(const std::string& path) {
    std::vector<std::string> lines;
    std::ifstream file(path);

    if (!file.is_open()) {
        std::cerr << "Erreur : Impossible d’ouvrir le fichier " << path << std::endl;
        return lines;
    }

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}
