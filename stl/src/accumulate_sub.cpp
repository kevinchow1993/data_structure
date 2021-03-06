#include "ros/ros.h"
#include "std_msgs/String.h"
#include <algorithm>
#include "iostream"
#include <numeric> 
using namespace std;


template <class T>
T accumulate_me(T a[] ,int n){
	T sum=0;
	return accumulate(a,a+n,sum);
}
int main(int argc, char *argv[])
{
	int A[10]={1,2,3,4,5,6,7,8,9,10};
	ros::init(argc, argv, "accumulate");
    cout<<accumulate_me(A,10)<<endl;
	
	ros::NodeHandle n;

	
	ros::spin();

	return 0;
}