#include <iostream>

using namespace std;


int main()
{
    long long n;
    int i, a, b=0;
    cin>>n;
    for(i=0; i<19; i++){
        if(n/10==0){
                if(n==4 || n==7){
                b++;
                break;
            }
        else{
            break;
        }
        }
        else{
            a=n%10;
            n=n/10;
            if(a==4 || a==7){
                b++;
            }
        }
    }
    if(b==4 || b==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
