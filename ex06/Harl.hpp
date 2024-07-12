#pragma once

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
public:
  void complain(std::string level);

private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

  void log(std::string level, std::string log);
};

#endif
