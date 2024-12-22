#include <iostream>
#define MAXSIZE 5
using namespace std;
int queue[MAXSIZE];
int front=-1;
int rear=-1;

void enqueue(int value)
{
    if(rear !=MAXSIZE-1)
    {
        if(front==-1&&rear==-1)
        {
           front++;
           rear++;
           queue[rear]=value;
        }
        else{
            rear++;
            queue[rear]=value;
        }
    }
    else{
        cout<<"isfull"<<endl;
    }
}
void dequeue()
{
    if(front !=-1&&rear !=-1&&front<=rear)
    {
        int value;
        value=queue[front];
        front++;
    }
    else{
        cout<<"queue inempty"<<endl;
    }
}
int peek()
{
    if(front !=-1&&rear !=-1&&front<=rear)
    {
        return queue[front];
    }
    else{
        cout<<"isEmpty"<<endl;
        return -1;
    }
}
void display()
{
    if(front !=-1&&rear !=-1&&front<=rear)
    {
       for(int i=front;i<=rear;i++)
       {
           cout<<queue[i]<<"\t";
       }
       cout<<endl;
    }
    else{
        cout<<"isEmpty"<<endl;
    }
}
int main()
{
   enqueue(5);
   enqueue(10);
   enqueue(15);
   display();
   dequeue();
   display();
    return 0;
}
