#include<bits/stdc++.h>
using namespace std;
int main(){
	int i , j , n ;
	int a[1000];
	cout<<"Enter the length of the array : "<<"\n";
	cin>>n;
	cout<<"Enter the elements of the array : "<<"\n";
	for(i = 0 ; i< n ; i++){
		cin>>a[i];
	}
	cout<<"The sub arrays of the array are: "<< "\n";
		for(i = 0 ; i< n ; i++){
		for(j=i;j<n;j++){
			for(int k =i ; k<= j ; k++ ){
				cout<<a[k]<<",";
			}
			cout<<"\n";
		}
	}
	return 0;
}
