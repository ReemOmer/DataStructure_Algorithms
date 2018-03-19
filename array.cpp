#include <iostream>

using namespace std;

int main()
{
    int x[3][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>x[i][j];
        }
    }
    for(int i=0;i<3;i++){
        x[2][i] = x[0][i]*x[1][i];
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
