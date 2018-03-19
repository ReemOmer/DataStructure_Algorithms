#include <iostream>

using namespace std;

int main()
{
    int x1=10, x2=20;
    int *p1=&x1, *p2=&x2;

    cout<<"Addition "<< *p1+*p2 <<endl;
    cout<<"Subtraction "<< *p1-*p2 <<endl;
    cout<<"Division "<< *p1/ *p2 <<endl;
    cout<<"Multiplication "<< *p1 * *p2 <<endl;
    cout<<"Modulus "<< *p1 % *p2 <<endl;

    return 0;
}
