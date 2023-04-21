#ifndef COHERENT_HASHING_COLORS_H
#define COHERENT_HASHING_COLORS_H

#include <string>

class Colors {
public:
    inline static const std::string ANSI_RESET = "\u001B[0m";
    inline static const std::string ANSI_BLACK = "\u001B[30m";
    inline static const std::string ANSI_RED = "\u001B[31m";
    inline static const std::string ANSI_GREEN = "\u001B[32m";
    inline static const std::string ANSI_YELLOW = "\u001B[33m";
    inline static const std::string ANSI_BLUE = "\u001B[34m";
    inline static const std::string ANSI_PURPLE = "\u001B[35m";
    inline static const std::string ANSI_CYAN = "\u001B[36m";
    inline static const std::string ANSI_WHITE = "\u001B[37m";
};

#endif
