#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j, n, t;
    string s;
    cin>>n>>t>>s;
    for (j=0; j<t; j++){
    for(i=0; i<n; i++){
       if(s[i]=='B'&&s[i+1]=='G'){
        s[i]='G';
        s[i+1]='B';
        i++;
       }
    }
    }
    cout<<s;
    return 0;
}
