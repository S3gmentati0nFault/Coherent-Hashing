#include <iostream>

#include "Logger.h"
#include "Colors.h"

void Logger::error(std::string message) {
    std::cout << Colors::ANSI_RED << " <<!>> " << message
    << " <<!>> " << Colors::ANSI_RESET << std::endl;
}

void Logger::notice(std::string message) {
    std::cout << Colors::ANSI_BLUE << " <<?>> " << message
              << " <<?>> " << Colors::ANSI_RESET << std::endl;
}

void Logger::interact(std::string message) {
    std::cout << Colors::ANSI_YELLOW << " <<U>> " << message
              << " >> " << Colors::ANSI_RESET;
}

void Logger::title(std::string message) {
    std::cout << Colors::ANSI_PURPLE << " <<~>> " << message
              << " <<~>> " << Colors::ANSI_RESET << std::endl;
}

void Logger::result(std::string message) {
    std::cout << Colors::ANSI_CYAN << " <<*>> " << message
              << " <<*>> " << Colors::ANSI_RESET << std::endl;
}


