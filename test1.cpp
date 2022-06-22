#include <cstdint>
#include <iostream>
#include <set>

#include "include/CheckPointee.h"

using namespace std;

int main() {
  int x, a, b, *p;
  cout << "Enter the value of x,a,b " << endl;
  cin >> x >> a >> b;

  set<int *> s1;
  s1.insert(&a);
  s1.insert(&b);
  s1.insert(&x);

  cout << "checkpoint 1 " << CheckPoint(p, s1) << endl;
  if (x) {
    p = &a;
    cout << "checkpoint 2 " << CheckPoint(p, s1) << endl;
  } else {
    p = &b;
    cout << "checkpoint 3 " << CheckPoint(p, s1) << endl;
  }
  cout << "checkpoint 4 " << CheckPoint(p, s1) << endl;
  return 0;
}

