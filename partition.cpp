/* partioning algorithm.cpp
  Author: Richard Guerre
  */

#include <iostream>
using namespace std;

void part(const double n, double parts[]) {
  for(int i = 0; i < 10; i++) {
    parts[i] = n/1000000000;
  }
}

void print_parts(double parts[]) {
  for (int i = 0; i < 10; i++) {
    cout << parts[i];
  }
}

int main() {
  double parts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  const double bigNum = 239547204932892;

  part(bigNum, parts);
  print_parts(parts);

  return 0;
}
