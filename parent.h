#include <iostream>

using namespace std;

class parent {
 public:
  parent(char inTitle, int inYear, char inPublisher[]);
  getTitle(char* inTitle);
  setTitle(char newTitle[]);
 protected:
  char title[50];
  int year;
  char publisher[50];
};
