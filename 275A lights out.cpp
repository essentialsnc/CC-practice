#include <iostream>
 
using namespace std;
 
int main()
{
    int A[5][5], B[5][5];
    int i, j;
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            cin>>A[i][j];
        }
    }
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            B[i][j]=0;
        }
    }
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            B[i][j]+=A[i][j];
            B[i+1][j]+=A[i][j];
            B[i-1][j]+=A[i][j];
            B[i][j+1]+=A[i][j];
            B[i][j-1]+=A[i][j];
        }
    }
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            cout<<(B[i][j]+1)%2;
        }
        cout<<endl;
    }
    return 0;
}
