#include <iostream>

#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void push(int x){
	if(top == MAX_SIZE -1){
		cout << "Error: stack overflow";
		return;
	}
	A[++top] = x;
}

void pop(){
	if(top == -1){
		cout << "Error: No element to pop";
	}
	top--;
}
int Top(){
	return A[top];
}

using namespace std;

int main()
{
    push(2);
	push(5);
	push(10);
	pop();
	push(12);
    return 0;
}

