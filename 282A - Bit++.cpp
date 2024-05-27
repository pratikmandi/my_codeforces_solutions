#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL),cout.tie(NULL);
    
    int n,x=0;
    cin>>n;
    string s;
    while(n--) {
        cin>>s;
        if(s[1]=='+'){
            x++;
        } else {
            x--;
        }
    }
    cout<<x;
    return 0;
}