#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int sum =0;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }
    cout<<sum;

    
}