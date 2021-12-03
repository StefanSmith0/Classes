#include <iostream>
#include <cstring>
#include <vector>
#include "parent.h"
#include "videoGames.h"

using namespace std;

int main() {
  videoGames* videoGames = new videoGames();
  vector<parent*> storage;
  storage.push_back(videoGames);
  return 0;
}
