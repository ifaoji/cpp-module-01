#include <string>

class Zombie {
public:
  Zombie(std::string name);

  void announce() const;

private:
  std::string name;
};
