#define BOOST_TEST_MODULE MyTest
#include <boost/test/included/unit_test.hpp>
#include "/home/saloni/pointer_checker/newfile3.cpp"


BOOST_AUTO_TEST_CASE( my_test1 )
{
	cout<<"Running test case 1"<<endl;
	func(1,2,3,'A');
}
BOOST_AUTO_TEST_CASE( my_test2 )
{
	cout<<"Running test case 2"<<endl;
	func(1,2,3,'B');
}
BOOST_AUTO_TEST_CASE( my_test3 )
{
	cout<<"Running test case 3"<<endl;
	func(1,2,3,'C');
}
BOOST_AUTO_TEST_CASE( my_test4 )
{
	cout<<"Running test case 4"<<endl;
	func(1,2,3,'D');
}