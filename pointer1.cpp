#include <iostream>

using namespace std;

int main()
{

    //accessing memory location
    int var1; char var2[10];
    cout << "Address of var1 variable: ";
    cout << &var1 << endl;
    cout << "Address of var2 variable: ";
    cout << &var2 << endl;
    //pointers example
    int *ip; // pointer to an integer
    double *dp; // pointer to a double
    float *fp; // pointer to a float
    char *ch // pointer to character
    //defining a pointer to point to the memory location of a variable
    int x; int *ptr; ptr = &x;
    //assign value of x
    x=5;
    //or by assigning to the pointer
    *ptr=5;
    */
    //defining variables
    int x=10, y=5, *ptr1, *ptr2;
    cout<<x<<" "<<y<<" "<<&x<<" "<<&y<<" "<<ptr1<<" "<<ptr2<<endl;
    //assigning the pointers values
    /*
    ptr1=&x;
    ptr2=&y;
    cout<<x<<" "<<y<<" "<<&x<<" "<<&y<<" "<<ptr1<<" "<<ptr2<<endl;
    */
    //swapping the pointers values
    /*
    ptr1=&y;
    ptr2=&x;
    cout<<x<<" "<<y<<" "<<&x<<" "<<&y<<" "<<ptr1<<" "<<ptr2<<endl;
    */
    //2pointers to same locations
    /*
    x=y;
    cout<<x<<" "<<y<<" "<<&x<<" "<<&y<<" "<<ptr1<<" "<<ptr2<<endl;
    *ptr1=y;*ptr2=x; // equal to x=y;
    cout<<x<<" "<<y<<" "<<&x<<" "<<&y<<" "<<ptr1<<" "<<ptr2<<endl;
    */
    // one pointer points to another one
    ptr1=ptr2;
    cout<<x<<" "<<y<<" "<<&x<<" "<<&y<<" "<<ptr1<<" "<<ptr2<<endl;

    cout<<&ptr1;

    return 0;
}
