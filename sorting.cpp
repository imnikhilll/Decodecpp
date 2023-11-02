//SORTING: Arrangging the elements in logical order
// it can be either alphabetical or numerical

//BUBBLE SORT PROGRAM
#include<iostream>
using namespace std;
int main(){
    int a[10],n,i,temp,j;

    cout<<"Enter the range of array";
    cin>>n;
    
    cout<<"Enter the elements of the array";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"SORTED ARRAY IS";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
