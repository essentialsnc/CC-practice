#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int A[5][5];
    int i, j, k, t, sol;
    for(i=0; i<5; i++){
        cin >> A[i][0] >> A[i][1] >> A[i][2] >> A[i][3] >> A[i][4];
    }
    for(j=0; j<5; j++){
        for(k=0; k<5; k++){
            t = A[j][k];
            if(t==1){
                break;
            }
        }
            if(t==1){
                break;
            }
        }
    sol = abs(j-2) + abs(k-2);
    cout<<sol;
    return 0;
}
