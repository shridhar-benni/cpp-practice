#include <iostream>
using namespace std;

struct student{
	string name;
	int ID;
};

int main(){
	student s1;
	/*
	cout<<"Enter Name of Student: ";	
	//cin>>s1.name;
	getline(cin, s1.name);
	cout<<"Enter ID: ";
	cin>>s1.ID;
	cout<<"Name: "<<s1.name<<endl;
	cout<<"ID: "<<s1.ID<<endl;
	*/

	student *s1p;	
	s1p = &s1;
	/*
	cout<<"Enter Name of Student: ";	
	//cin>>s1.name;
	getline(cin, (*s1p).name);
	cout<<"Enter ID: ";
	cin>>(*s1p).ID;
	cout<<"Name: "<<(*s1p).name<<endl;
	cout<<"ID: "<<(*s1p).ID<<endl;
	*/


	cout<<"Enter Name of Student: ";	
	//cin>>s1.name;
	getline(cin, s1p->name);
	cout<<"Enter ID: ";
	cin>>s1p->ID;
	cout<<"Name: "<<s1p->name<<endl;
	cout<<"ID: "<<s1p->ID<<endl;
	return 0;
}
