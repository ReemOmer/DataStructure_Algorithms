#include<iostream>

using namespace std;
int main(){
    int i,n,k,c=0,l=0, u=n-1,m;
    cout<< "Enter the size of an array: \n";
    cin>> n;
    int arr[n];
    cout<<"Enter the elements in ascending order:\n";
    for(i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<< "Enter the number to be search: \n";
    cin>>k;
    while (l<=u){
        m=(l+u)/2;
        if (k == arr[m]){
            c=1;
            break;
        }
        else
            if (k<arr[m]){
                u=m-1;
            }
            else
                l=m+1;
    }
    if(c==0)
        cout<< "The number is not found.";
    else
        cout<< "The number is found  in position"<<(m+1);
    return 0;
}
