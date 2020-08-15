#include<iostream>
using namespace std;

int main(){
    int n ; 
    cin>>n; //declaring array elements
    int a[n];
    int i ; 
    //taking input in the array
    for( i = 0;i  < n ; i ++){
        cin>>a[i];
    }
    //output of the array
    for( i =  0  ; i < n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int s;
    //size of the array
    cout<<sizeof(a)<<endl;
    //no of elements in the array
     s = sizeof(a)/sizeof(int);
     cout<<s<<endl;
    return 0 ;
}
