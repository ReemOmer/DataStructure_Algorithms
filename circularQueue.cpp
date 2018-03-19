#include <iostream>

using namespace std;
#define Max 3
int head = -1, rear=-1;
int myqueue[Max];

bool isEmpty(){
    if(rear==-1  & head==-1)
        return true;
    else
        return false;
}

bool isFull(){
    if(head == ((rear+1)%Max))
        return true;
    else
        return false;
}

void Enqueue(int x){
    if(isFull())
        cout<<"Queue is Full!"<<endl;
    else{
        if(isEmpty()){
            head++;
            rear++;
            myqueue[rear] = x;
            cout<<"The element inserted!"<<endl;
        }
        else{
            rear = (rear+1)%Max;
            myqueue[rear] = x;
            cout<<"The element inserted!"<<endl;
        }
    }
}
void Dequeue(){
    if(isEmpty())
        cout<<"Queue is Empty!"<<endl;
    else{
        if(head==-1 & rear==-1){
            head = -1;
            rear = -1;
        }
        else{
        head = (head+1)%Max;
        cout<<"The element deleted!"<<endl;
        }
    }
}
void display(){
    if(isEmpty())
        cout<<"Queue is Empty!"<<endl;
    else{
        if(rear >= head){
            for (int i = head; i <= rear; i++)
            cout<<myqueue[i]<<" ";
            }
        else{
            for (int i = head; i < Max; i++)
                cout<<myqueue[i]<<" ";
            for (int i = 0; i <= rear; i++)
                cout<<myqueue[i]<<" ";
            }
            cout<<endl;
        }
}


int main ()
{
    Dequeue();
    display();
    Enqueue(3);
    Enqueue(7);
    Enqueue(10);
    display();
    Dequeue();
    Dequeue();
    display();
    Enqueue(2);
    display();
    return 0;
}
