#include "ros/ros.h"
#include "std_msgs/String.h"
#include "map"
#include "iostream"
using namespace std;


int main(int argc, char *argv[])
{
	
	ros::init(argc, argv, "map");

	
	ros::NodeHandle n;
	map<string,int> student;
	student["kevin"]=100;
	student["chow"]=88;
	student["luo"]=99;
	student["xin"]=77;
	for(map<string,int>::iterator it = student.begin();it != student.end();it ++){
		cout<<(*it).first<<":"<<(*it).second<<endl;
}
	cout<<"反向"<<endl;
	for(map<string,int>::reverse_iterator rs_it = student.rbegin();rs_it!= student.rend();rs_it++){
		cout<<(*rs_it).first<<":"<<(*rs_it).second<<endl;
	}

	student.insert(pair<string,int>("David",232));
	student.insert(map<string,int>::value_type("joho",234));
	student.insert(make_pair("peter",234));
	for(map<string,int>::iterator it=student.begin();it !=student.end();it ++){
		cout<<(*it).first<<"\t"<<(*it).second<<endl;
	}

	return 0;
}