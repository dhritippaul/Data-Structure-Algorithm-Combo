#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//comparator function
bool compare(int a,int b){
	return a<b;
}

int main(){
	int i , n;
	int a[1000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,compare); //passing function name as parameter to the sort fuction
	for(i =0 ; i< n; i++){
		cout<<a[i]<< " ";
	}
		return 0;
	}
	
	
	
	
	
	
	

