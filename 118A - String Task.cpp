#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
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


int main(){
fastio;

string s;
    cin >> s;
    vc v;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i]=='y'){
            continue;
        } else {
            v.pb('.');
            v.pb(s[i]);
        }
    }

    for(auto i : v) {
        cout << i;
    }
}