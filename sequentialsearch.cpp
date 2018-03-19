#include<iostream>

using namespace std;

#define max 100
int main(){
    int  n,i=-1,k;
    int arr [max];
    cout<<"Enter how many numbers you are going to enter:\n";
    cin>>n;
    cout<<"Now enter your elements:\n";
    for(i=0;i<n;i++)
        cin>> arr[i];
    cout<<"Enter the key:\n";
    cin >>k ;
    for(i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"found at position: "<<i ;
            break;
        }
    }
    if(i>=n)
        cout << "Not found";
    return 0;
}
