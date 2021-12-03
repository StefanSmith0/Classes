#include "videoGames.h"

using namespace std;

videoGames::videoGames(int value, int secondvalue) : parent(value) {
  cout << "Video Games Child Initialized" << endl;
  id = value;
  id2 = secondvalue;
}
