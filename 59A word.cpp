#include <iostream>
#include <string>
 
using namespace std;
 
 
int main()
{
    int cu=0, cl=0, n, i;
    char c;
    string s;
    cin>>s;
    n = s.length();
    for(i=0; i<n; i++){
        if(isupper(s[i])){
            cu++;
        }
        else{
            cl++;
        }
    }
    if(cu>cl){
        for(i=0; i<n; i++){
            if(islower(s[i])){
                c=toupper(s[i]);
                }
                else{
                c=s[i];
            }
                cout<<c;
        }
    }
    else {
        for(i=0; i<n; i++){
                if(isupper(s[i])){
                c = tolower(s[i]);
            }
            else{
                c=s[i];
            }
                cout<<c;
        }
    }
    return 0;
}
