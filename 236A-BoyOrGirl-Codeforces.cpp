#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    string s1;
    cin>>s1;

    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
    
    set<char> set1;
    set1.insert(s1.begin(), s1.end());
    
        if(set1.size()%2==0){
            cout<<"CHAT WITH HER!";
        }
        else{
            cout<<"IGNORE HIM!";
        }
    

    return 0;
}