#ifndef LOG_HPP
# define LOG_HPP

# include <iostream>
# include <string>

# define RESET  "\033[0;0m"
# define R      "\033[0;31m" // Red
# define G      "\033[0;32m" // Green
# define Y      "\033[0;33m" // Yellow
# define B      "\033[0;34m" // Blue
# define M      "\033[0;35m" // Magenta
# define C      "\033[0;36m" // Cyan
# define W      "\033[0;37m" // White

class Log
{
  public:
    Log(void);
    Log(const Log &rhs);
    ~Log(void);
    Log &operator=(const Log &rhs);

    // Normal color
    void out(const std::string& message);
    void out(const int number);
    void out(const double number);
    void out(const float number);
    void nl(const std::string& message);
    void nl(const int number);
    void nl(const double number);
    void nl(const float number);

    // Color text
    void out(const std::string& message, std::string color);
    void out(const int number, std::string color);
    void out(const double number, std::string color);
    void out(const float number, std::string color);
    void nl(const std::string& message, std::string color);
    void nl(const int number, std::string color);
    void nl(const double number, std::string color);
    void nl(const float number, std::string color);
};

#endif
