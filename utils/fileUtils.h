#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <string>
#include <vector>

class FileUtils {
public:
    static std::vector<std::string> readFileLines(const std::string& path);
};

#endif
