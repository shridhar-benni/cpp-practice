#include <iostream>
using namespace std;

struct node{
	int val;
	//struct *node next;
	struct node *next;
};

int main(){
	node *n1, *n2, *n3;
	n1 = new node();
	n2 = new node();
	n3 = new node();

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
	cout<<endl;
	return 0;
}
