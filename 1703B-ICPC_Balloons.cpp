#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <cmath>
#include <utility>
#include <set>
#include <unordered_set>
#define pb push_back
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef long long ll;
typedef unsigned long long ull;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

//--------------------------------------------------------//


int main() {
    fastio;
    
    int t;
    string s;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        cin >> s;
        
        multiset<int> v1;
        int balloons = 0;
        
        for (char i: s) {
            if (v1.find(i) == v1.end()) {
                v1.insert(i);
                balloons += 2;
            } else {
                balloons += 1;
            }
        }
        
        cout<<balloons<<endl;
    }
    
    return 0;
}