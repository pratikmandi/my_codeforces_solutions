#include <iostream>
#include <set>
#include <utility>
using namespace std;

int main(){
    int n;
    string a,b;
    cin>>n;
    
    set<pair<string, string> > s1;
    
    while(n--){
        cin>>a>>b;
        s1.insert(make_pair(a,b));
    }
    cout<<s1.size()<<endl;

    // cout<<"Pairs are: "<<endl;
    // for(const auto &p : s1){
    //     cout << p.first << " " << p.second << endl;
    // }

    return 0;
    
}