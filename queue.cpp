#include<iostream>

using namespace std;

#define Max 10
int head = -1;
int rear = -1;
int myqueue[Max];

bool isEmpty(){
    if((rear==-1) && (rear==-1))
        return true;
    else
        return false;
}

bool isFull(){
    if(rear==Max)
        return true;
    else
        return false;
}

void enqueue(int x){
    if(isFull())
        cout<<"Queue is Full!"<<endl;
    else{
        if(head==-1){
            head++;
            rear++;
            myqueue[rear]=x;
            cout<<"You inserted the first element!"<<endl;
        }
        else{
            rear++;
            myqueue[rear]=x;
            cout<<"The value inserted successfully!"<<endl;
        }
    }
}

void dequeue(){
    if(isEmpty())
        cout<<"Queue is Empty!"<<endl;
    else{
        head++;
        cout<<"The value deleted successfully!"<<endl;
    }
}
void display(){
    if(isEmpty()){
        cout<<"Queue is Empty!"<<endl;
    }
    else{
        for(int i=head;i<=rear;i++){
            cout<<myqueue[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    display();
    dequeue();
    enqueue(3);
    display();
    enqueue(7);
    display();
    dequeue();
    display();
    return 0;
}
