#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;

	int *arr = new int[size];

	for(int i = 0; i < size; i++){
		arr[i] = i;
	}
	for(int i = 0; i< size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
