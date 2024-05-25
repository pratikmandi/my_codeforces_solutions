#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int s;
    vector<int> v(4);
    for(auto &i : v){
        cin >> i;
    }
    
    set<int> set1;
    set1.insert(v.begin(), v.end());
    
    cout<<(4-set1.size())<<endl; 
}