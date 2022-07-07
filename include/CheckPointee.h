#include <cstdint>
#include <iostream>
#include <set>
#include <utility>

using namespace std;

typedef pair<const char *, void *> pairs;

void CheckPoint(void *pointer, set<pairs> &pointee , const char *pointer_name) {
  bool found = false;
  const char *temp;
	cout<<"set of pointees : { ";
	for (auto &x : pointee) {
	cout<< x.first<<" ";}
	cout<<"}";
  for (auto &x : pointee) {
    if (pointer == x.second) {
      found = true;
      temp = x.first;
      break;
    }
  }
  if (found == false)
    cout << "\t pointer "<<pointer_name<<" : {} \t "<<"Test Fail"<< endl;
  else
    cout << "\t pointer "<<pointer_name<<" : {"<< temp << "}\t "<<" Test pass"<< endl;
  //eturn found;
}


