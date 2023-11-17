#include <iostream>

using namespace std;

const int maxsize=5;

int queue[maxsize];
int front=-1,rear=-1;

void insert(int val)
{
    if(rear==maxsize-1)
    {
        cout<<"Overflow Condition "<<endl;
        return ;

    }
    else
    {
        if(front==-1)
        {
            front=0;

        }
        rear=rear+1;
        queue[rear]=val;
    }
}

void delete1()
{
    if(front==-1 || front> rear)
    {
        cout<<"Underflow "<<endl;
        return;

    }
    else
    {
        cout<<"Deleted item is: "<<queue[front];
     
    }

}
void display()
{
    if(front==-1||front>rear)
    {
        cout<<"Queue is empty"<<endl;

    }
    else{
        cout<<"queue elements are : ";
        for(int i=front;i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
    }
}
int main()
{
    cout<<"1.Insert"<<endl;
    cout<<"2.Delete"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"4.Exit"<<endl;

    int ch;

    while(1)
    {
        cout<<"Enter your choice from above given options: ";
        cin>>ch;
        int val;

        switch(ch)
        {

            case 1:
            cout<<"Enter the number: ";
            cin>>val;
            insert(val);
            break;

            case 2:delete1();break;
            case 3:display();break;
            case 4:exit(0);

            default:
            cout<<"Invalid choice: "<<endl;


        }

    }


}