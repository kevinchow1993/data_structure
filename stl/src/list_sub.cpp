#include "ros/ros.h"
#include "std_msgs/String.h"
#include "list"

#include "iostream"
using namespace std;

template <class T>
void showlist(list<T> v){
	for ( typename std::list<T>::iterator it = v.begin() ; it != v.end(); it++)
	{
		cout<<*it;
	}
	cout<<endl;
}
int main(int argc, char *argv[])
{
	list<int> l1{8,5,7,6,1,2,3,4,5,5,6,7,7};
	ros::init(argc, argv, "list");

	
	ros::NodeHandle n;
	showlist(l1);
	list<double> l2;
	list<char> l3(10);
	list<int> l4(4,2);
	showlist(l4);
	l1.sort();
	showlist(l1);

	return 0;
}