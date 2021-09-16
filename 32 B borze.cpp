#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, n;
    string s;
    cin>>s;
    n = s.length();
    for (i=0; i<n; i++){
            if(s[i]=='.'){
                cout<<0;
            }
            else if(s[i]=='-' && s[i+1]=='.'){
                cout<<1;
                i+=1;
            }
            else if(s[i]=='-' && s[i+1]=='-'){
                cout<<2;
                i+=1;
            }
    }
    return 0;
}
