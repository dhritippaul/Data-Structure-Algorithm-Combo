#include<bits/stdc++.h>
using namespace std;
int main(){
	int i , j , n,maxSum ;
	int a[1000];
	int left = -1;
	int right  = -1;
	cout<<"Enter the length of the array : "<<"\n";
	cin>>n;
	cout<<"Enter the elements of the array : "<<"\n";
	for(i = 0 ; i< n ; i++){
		cin>>a[i];
	}
	
		for(i = 0 ; i< n ; i++){
		for(j=i;j<n;j++){
			int currentSum = 0;
			for(int k =i ; k<= j ; k++ ){
				currentSum += a[k];
			}
		if (currentSum>maxSum)
		{
			maxSum = currentSum;
			left = i;
			right = j;
		}
		}
	}
	
	cout<<"The subarray with maximum sum is :"<<"\n";
	for ( int k =left ; k <= right ; k++){
		cout<<a[k]<<" ";
	}
	cout<<"\n";
	cout<<"Maximun sum of subarray is :"<<maxSum<<"\n";
	return 0;
}
