#include <iostream>

using namespace std;

int main()
{
    int x[100], y[100], z[100], xsum, ysum, zsum, n, t;
    cin>>n;
    xsum = ysum = zsum = 0;
    for(t=0; t<n;t++)
        cin>>x[t]>>y[t]>>z[t];
    for(t=0; t<n;t++){
        xsum = xsum + x[t];
        ysum = ysum + y[t];
        zsum = zsum + z[t];
    }
    if(xsum==0 && ysum==0 && zsum==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
