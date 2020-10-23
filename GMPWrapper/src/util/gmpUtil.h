#include <iostream>
#include <string>
#include <regex>
#include <vector>

namespace gmp::util {

// static const std::regex re{"\\s+"};
std::vector<std::string> split(
  const std::string& subject,
  const std::regex& re) 
{
  std::vector<std::string> container{
      std::sregex_token_iterator(subject.begin(), subject.end(), re, -1), 
      std::sregex_token_iterator()
  };
  return container;
}

std::vector<std::string> split(
  const std::string& subject)
{
  std::regex re{"\\s+"};
  return split(subject, re);
}
  
}