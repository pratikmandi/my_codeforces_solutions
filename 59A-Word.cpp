#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    int cnt_upper=0, cnt_lower=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]>='A' && s[i]<='Z')
            cnt_upper++;
        else if (s[i]>='a' && s[i]<='z')
            cnt_lower++;
    }
    if(cnt_upper>cnt_lower)
        transform(s.begin(),s.end(),s.begin(),::toupper);
    else if (cnt_upper<cnt_lower)
        transform(s.begin(),s.end(),s.begin(),::tolower);
    else transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
}