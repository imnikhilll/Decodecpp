//SELECTION SORTING
#include <iostream>
using namespace std;
int main(){
    int a[10],n,i,j,loc,small,temp;
    cout<<"Enter the range";
    cin>>n;

    cout<<"Enter the Elements";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        small=a[i];
        loc=i;
        for(j=i+1;j<n;j++){
            if (a[j]<small){
                small=a[j];
                loc=j;
            }
        }
    }
    temp=a[i];
    a[i]=a[loc];
    a[loc]=temp;
    return 0;
}