#include <iostream>
using namespace std;

struct node{
	int val;
	//struct *node next;
	struct node *next;
};

int main(){
	node *n1, *n2, *n3;
	n1 = new(nothrow) node();
	if(!n1) cout<<"Memory allocation failed for n1"<<endl;
	n2 = new(nothrow) node();
	if(!n2) cout<<"Memory allocation failed for n2"<<endl;
	n3 = new(nothrow) node();
	if(!n3) cout<<"Memory allocation failed for n3"<<endl;

	n1->val = 1;
	n1->next = n2; 
	n2->val = 2;
	n2->next = n3;
	n3->val = 3;
	n3->next = NULL;

	cout<<"(*n1).val: "<<(*n1).val<<" n1->val: "<<n1->val<<endl;
	cout<<"(*n2).val: "<<(*n2).val<<" n2->val: "<<n2->val<<endl;
	cout<<"(*n3).val: "<<(*n3).val<<" n3->val: "<<n3->val<<endl;
	cout<<"n1: "<<n1<<endl;
	cout<<"n2: "<<n2<<" n1->next: "<<n1->next<<endl;
	cout<<"n3: "<<n3<<" n2->next: "<<n2->next<<endl;
	cout<<"n3->next: "<<n3->next<<endl;
	cout<<"n1->val: "<<n1->val<<endl;
	cout<<"n1->next->val: "<<n1->next->val<<endl;
	cout<<"n1->next->next->val: "<<n1->next->next->val<<endl;

	delete n3;
	delete n2;
	delete n1;	
	cout<<endl;
	return 0;
}
