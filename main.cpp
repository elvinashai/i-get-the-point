#include <iostream>
#include "src/Point.hpp"

using namespace std;

int main() {
  Point p1(3.2, 9.8);
  Point p2(5.5, -1.2);

  cout << p1 - p2 << endl;
  cout << (p1 == p2) << endl;
  cout << (p1 != p2) << endl;
  cout << (p1 / p2) << endl;

  cout << p1 * 2 << endl;
  cout << p1['x'] << endl;

  return 0;
}
