#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;

void fullGame();
void showDown();

class Player{
private:
public:
  string pos;
  string name;
  int id;
  int salary;
  double average;
};
