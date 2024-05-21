#include <string>

class Zombie {
public:
  Zombie(std::string name);
  ~Zombie();

  void announce() const;

private:
  std::string name;
};
