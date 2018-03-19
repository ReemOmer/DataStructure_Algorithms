#include<iostream>

using namespace std;

#define Max 10
int top = -1;
int mystack[Max];

bool isEmpty(){
    if(top==-1)
        return true;
    else
        return false;
}
bool isFull(){
    if(top==Max)
        return true;
    else
        return false;
}

void push(int x){
    if(isFull())
        cout<<"Stack is Full!"<<endl;
    else{
        top++;
        mystack[top] = x;
        cout<<"The value inserted!"<<endl;
    }
}
void pop(){
    if(isEmpty())
        cout<<"Stack is Empty!"<<endl;
    else{
        top--;
        cout<<"The value deleted!"<<endl;
    }
}
void display(){
    if(isEmpty())
        cout<<"Stack is Empty!"<<endl;
    else{
    for(int i=0;i<=top;i++){
        cout<<mystack[i]<<" ";
    }
    cout<<endl;
    }
}
int main(){
    display();
    pop();
    push(3);
    display();
    push(7);
    display();
    pop();
    display();
    return 0;
}




