#include<iostream>
#include<set>
#include <cstdint>

#include"include/CheckPointee.h"

using namespace std;

int main()
{
	uintptr_t x,a,b,*p;
	cin>>x>>a>>b;
	set<uintptr_t> s1;
	s1.insert(reinterpret_cast<uintptr_t>(&a));
	s1.insert(reinterpret_cast<uintptr_t>(&b));
	s1.insert(reinterpret_cast<uintptr_t>(&x));
	cout<<&a<<" "<<&b<<" "<<&x<<" "<<endl;
	cout<<CheckPoint(p,s1)<<"checkpoint 1"<<endl;
	if(x) {p=&a;cout<<CheckPoint(p,s1)<<"checkpoint 2"<<endl;}
	else	{ p=&b;cout<<CheckPoint(p,s1)<<"checkpoint 3"<<endl;}
	cout<<CheckPoint(p,s1)<<"checkpoint 4"<<endl;
	return 0; 	
}
