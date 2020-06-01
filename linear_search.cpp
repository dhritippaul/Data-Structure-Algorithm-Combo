#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n , key ;
	cin>>n;
	
	int a[1000];
	int i;
	for ( i = 0 ; i < n ; i++)
	{
		 cin>> a[i];
	}
	cout<<"Enter the element you want to search :  "<<"\n";
	cin >> key;
	for ( i = 0 ; i< n ; i++)
	{
		if (a[i] == key){
			cout<<key<<"is found at location "<<i<<"\n";
		}
	}
	if (i== n)
	cout<<"Key is not present"<<"\n";
	return 0 ;
	
}
