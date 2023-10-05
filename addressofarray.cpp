//continuous memory allocation 
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        cout<<&arr[i]<<endl;
    }
    cout<<arr;//Prints address of first element 
}
// 0 1 2 3 4 5 6 7 8 9 a b c d e f