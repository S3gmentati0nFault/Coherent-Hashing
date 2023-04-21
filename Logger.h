#ifndef COHERENT_HASHING_LOGGER_H
#define COHERENT_HASHING_LOGGER_H

#include <string>

class Logger {
public:
    static void error(std::string message);

    static void notice(std::string message);

    static void interact(std::string message);

    static void title(std::string message);

    static void result(std::string message);
};

#endif