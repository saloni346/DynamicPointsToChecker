#include <cstdint>
#include <iostream>
#include <set>
#include <utility>

using namespace std;

typedef pair<const char *, int *> pairs;

void CheckPoint(int *pointer, set<pairs> &pointee) {
  bool found = false;
  const char *temp;
	cout<<"set of pointees : { ";
	for (auto &x : pointee) {
	cout<< x.first<<" ";}
	cout<<" }";
  for (auto &x : pointee) {
    if (pointer == x.second) {
      found = true;
      temp = x.first;
      break;
    }
  }
  if (found == false)
    cout << "\t pointer p : {} \t p doesn't belong"<< endl;
  else
    cout << "\t pointer p : {"<< temp << "}\t p belong"<< endl;
}

