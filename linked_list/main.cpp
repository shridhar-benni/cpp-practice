#include <iostream>
using namespace std;

struct node{
	int val;
	//struct *node next;
	struct node *next;
};

int main(){
	node n1;
	node n2;
	node n3;

	n1.val = 1;
	n1.next = &n2; 
	n2.val = 2;
	n2.next = &n3;
	n3.val = 3;
	n3.next = NULL;

	cout<<"n1.val: "<<n1.val<<endl;
	cout<<"n2.val: "<<n2.val<<endl;
	cout<<"n3.val: "<<n3.val<<endl;
	cout<<"n1.next: "<<n1.next<<" &n2: "<<&n2<<endl;
	cout<<"n2.next: "<<n2.next<<" &n3: "<<&n3<<endl;
	cout<<"n3.next: "<<n3.next<<endl;
	
	cout<<"n1.val: "<<n1.val<<endl;
	//cout<<"*(n1.next).val: "<<*(n1.next).val<<endl; // error *(nl.next) = *(&n2)
	cout<<"(*n1.next).val: "<<(*n1.next).val<<endl; // (*&n2).val
	//cout<<"*(*(n1.next).next).val: "<<*(*(n1.next).next).val<<endl; // error *(*(&n2).next).val 
	cout<<"(*(*n1.next).next).val: "<<(*(*n1.next).next).val<<endl;
	cout<<endl;
	return 0;
}
