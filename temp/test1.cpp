#define BOOST_TEST_MODULE MyTest
#include <boost/test/included/unit_test.hpp>
#include "/home/saloni/pointer_checker/newfile1.cpp"


BOOST_AUTO_TEST_CASE( my_test1 )
{
	cout<<"Running test case 1"<<endl;
	func(1,2,3,1,2,3);

}

BOOST_AUTO_TEST_CASE( my_test2 )
{
	cout<<"Running test case 2"<<endl;
	func(0,2,3,1,4,5);
}
