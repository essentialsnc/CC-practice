#include <iostream>
#include <string>

using namespace std;


int main()
{
    int n, i;
    char c;
    string s;
    cin>>s;
    n = s.length();
    for(i=0; i<n; i++){
        if(i==0){
            c=toupper(s[0]);
        }
        else{
            c=s[i];
        }
        cout<<c;
    }
    return 0;
}
