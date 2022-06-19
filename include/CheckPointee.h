#include <set>
#include <iostream>
#include <cstdint>


using namespace std;


bool CheckPoint(uintptr_t *pointer, set<uintptr_t> pointee)
{
	set<uintptr_t>::iterator itr;
	for(itr=pointee.begin();itr!=pointee.end();itr++)
	{ cout<<*itr<<" ";}
	cout<<reinterpret_cast<uintptr_t>(pointer);
	cout<<pointer<<endl;
	for(itr=pointee.begin();itr!=pointee.end();itr++)
	{
		if(reinterpret_cast<uintptr_t>(pointer)==*itr) break;
	}
	if(itr==pointee.end()) return false;
	else return true;
}	
