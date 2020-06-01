#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
	int i , n;
	int a[1000];
	cin>>n;
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	int largest = INT_MIN;
	int smallest = INT_MAX;
	for (i =0 ; i< n ;i++){
		largest= max(largest , a[i]);
		smallest= min(smallest , a[i]);
		
	}
	
	cout<<"Largest : "<< largest <<"\n";
	cout<<"Smallest : "<<smallest <<"\n";
	
	return 0;
}
