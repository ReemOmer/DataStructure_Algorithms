#include <iostream>
const int MAX = 3;
using namespace std;
int  main ()
{

    int var[MAX] = {10, 100, 200};
    int *ptr; // let us have array address in pointer.
    ptr = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl; // point to the next location ptr++;
    }
    return 0;
 }



