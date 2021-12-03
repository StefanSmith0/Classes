#include <iostream>
#include "parent.h"

using namespace std;

class videoGames : public parent {
 public:
  videoGames(int value, int secondvalue);
 private:
  int id2;
};
