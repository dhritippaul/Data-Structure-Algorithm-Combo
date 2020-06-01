#include<bits/stdc++.h>
using namespace std;

int selection_sort(int a[], int n){
	for ( int  i=0 ; i<n-1; i ++){
		int min_index =  i;
		for ( int j = i ; j<=n-1 ; j++){
			if(a[j]<a[min_index]){
				min_index = j;
			}
		}
		swap(a[i], a[min_index]);
	}
}

int main(){
	int i , n ,a[1000]; 
	cout<<"Enter the length of the array :  "<<"\n";
	cin>>n;
	
	cout<<"Enter the elements in the array  : "<<"\n";
	for ( i =0 ; i<n ; i++){
		cin>>a[i];
	}
	selection_sort(a,n);
	cout<<"Elements after selection sort are : "<<"\n";
	for(i=0;i<n; i++){
		cout<<a[i]<<" ";
		
	}
	return 0 ;
}
