#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int i, n, a=0;
    cin>>n>>s;
    for(i=0; i<n; i++){
        if(s[i]==s[i+1]){
                a++;
                }
    }
    cout<<a;
    return 0;
}
