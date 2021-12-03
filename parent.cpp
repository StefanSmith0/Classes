#include "parent.h"
#include <cstring>

using namespace std;

parent::parent(char name[], int id) {
  cout << "Parent Constructed." << endl;
  strcpy(title, name);
  cout << "Initial parent name: " << title << endl;
}

parent::getTitle(char* inTitle) {
  strcpy(inTitle, title);
}

parent::setTitle(char newTitle[]) {
  strcpy(title, newTitle);
  cout << "Parent title set to: " << title << endl;
}
