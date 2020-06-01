#include<iostream>
using namespace std;
int main(){
	int a [10] = {0};
	
	cout<<"Sizeof: "<<sizeof(a)<<"\n";
	int n = sizeof(a)/sizeof(int);
	cout<<"Size of an array : "<<n<<"\n";
	
	
	for (int i=0;i<5;i++){
		cin>>a[i];
	}
	a[8] = 10; 
	
	for ( int i=0;i<n;i++){
		cout<<"Elements in array are: "<<a[i]<<"\n";
	}
	
	return  0;
}
