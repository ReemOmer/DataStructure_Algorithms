#include <iostream>

using namespace std;
int factorial(int n){
if (n>1){

    return n*factorial(n-1);
}
else{
    return 1;
}
}
int main()
{
    cout << "Enter an integer!";
    int x;
    cin >> x;
    int f = factorial(x);
    cout << f;
    return 0;
}

