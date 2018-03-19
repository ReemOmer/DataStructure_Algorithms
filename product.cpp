#include <iostream>

using namespace std;

int product(int n1, int n2)
           {
              if (n2 > 1)
              {
                  n1 += product(n1,n2-1) ;
              }
                 return n1;
           }

int main()
{
    int result = product(5,1);
    cout<<result;
    return 0;
}
