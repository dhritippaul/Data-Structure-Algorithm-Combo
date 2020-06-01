#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n){
	
	for(int  i=0; i <= n-1;i++)
	{
		int  e = a[i];
		int j = i-1;
		while(j>=0 and a[j]>e){
			a[j+1]=a[j];
			j = j -1;
		}
		a[j+1]= e;
	}


}

int main(){
	int n;
	int a[1000];
	
	cout<<"Enter the length of the array : "<<"\n";
	cin>>n;
	
	cout<<"Enter the elements in the array : "<<"\n";
	for(int i =0; i<n ; i++){
		cin>>a[i];
	}
	
    insertion_sort(a,n);
	cout<<"Elements after bubble sort are: "<<"\n";
	for(int i = 0 ; i< n ; i++){
		cout<<a[i]<<" ";
	}
	
	return 0 ;
	
}
