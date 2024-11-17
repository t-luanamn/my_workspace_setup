#include "Log.hpp"

Log::Log(void)
{
}

Log::Log(const Log &rhs)
{
  (void)rhs;
}

Log::~Log(void)
{
}

Log &Log::operator=(const Log &rhs)
{
  (void)rhs;
  return *this;
}

// Normal color
void Log::out(const std::string& message)
{
    std::cout << message;
}

void Log::out(const int number)
{
		std::cout << number;
}

void Log::out(const double number)
{
		std::cout << number;
}

void Log::out(const float number)
{
		std::cout << number;
}

void Log::nl(const std::string& message)
{
		std::cout << message << std::endl;
}

void Log::nl(const int number)
{
		std::cout << number << std::endl;
}

void Log::nl(const double number)
{
		std::cout << number << std::endl;
}

void Log::nl(const float number)
{
		std::cout << number << std::endl;
}

// Color text
void Log::out(const std::string& message, std::string color)
{
    std::cout << color << message << RESET;
}

void Log::out(const int number, std::string color)
{
		std::cout << color << number << RESET;
}

void Log::out(const double number, std::string color)
{
		std::cout << color << number << RESET;
}

void Log::out(const float number, std::string color)
{
		std::cout << color << number << RESET;
}

void Log::nl(const std::string& message, std::string color)
{
		std::cout << color << message << RESET << std::endl;
}

void Log::nl(const int number, std::string color)
{
		std::cout << color << number << RESET << std::endl;
}

void Log::nl(const double number, std::string color)
{
		std::cout << color << number << RESET << std::endl;
}

void Log::nl(const float number, std::string color)
{
		std::cout << color << number << RESET << std::endl;
}

/*
int main(void)
{
  Log log;

  // Test out functions without color
  log.out("Test string NC");
  log.out(123);
  log.out(123.456);
  log.out(123.456f);

  // Test out functions with color
  log.out("Test string", R);
  log.out(123, G);
  log.out(123.456, B);
  log.out(123.456f, M);

  // Test nl functions without color
  log.nl("Test string NC");
  log.nl(123);
  log.nl(123.456);
  log.nl(123.456f);

  // Test nl functions with color
  log.nl("Test string", R);
  log.nl(123, G);
  log.nl(123.456, B);
  log.nl(123.456f, M);
  return (0);
}
*/