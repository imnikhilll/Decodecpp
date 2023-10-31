#include <iostream>
using namespace std;
const int maxsize=5;
int cqueue[maxsize];
int front=-1,rear=-1;
void insert(int val){
    if(front==((rear+1)%maxsize)){
        cout<<"overflow condition ";
        return;


    }
    else if(front==-1){
        front =0;
        rear =0;
    }
    else if(rear=maxsize-1){
        rear=0;

    }
    else{
        rear=rear+1;

    }
    cqueue[rear]=val;
}

void delete1(){
    if(front==-1){
        cout<<"underflow" ;
        return ;

    }
    else if (front==rear){
        front=rear=-1;


    }
    else if(front==maxsize-1){
        front=0;
    }
    else{
        front=front+1;

    }

}
void display(){

    if(front==-1){
        cout<<"Queue is empty"<<endl;
        return;

    }
    else
    {
        

    }


}
int main(){
    int ch,val;
    cout<<"1.insert 2.delete 3.display 4.exit"<<endl;
    while(1){
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Enter the number: ";
            cin>>val;
            insert(val);
            break;
            case 2:
            delete1();break;
            case 3:
            display();break;
            case 4:
            exit(0);
            default:
            cout<<"Invalid ch0ice:";

        }
    }
}
