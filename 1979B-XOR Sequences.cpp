#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <cmath>
#include <utility>
#include <unordered_set>
#include <unordered_map>
#define pb push_back
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef set<int> si;
typedef set<char> sc;
typedef long long ll;
typedef unsigned long long ull;

// ================================== take ip/op like vector,pairs directly! ==================================//
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin >> a.first >> a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x : a) cin >> x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout << a.first << ' ' << a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD> > &a) { for (auto &x : a) cout << x << '\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n = a.size(); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << ' ' << a[i]; return cout; }
// =================================== END Of the input module ================================================//

ll solve(ll x,ll y) {
    vi v1,v2;

    while (x) {
        v1.pb(x%2);
        x /=2;
    }
    while (y) {
        v2.pb(y%2);
        y /=2;
    }
    while (v1.size()<32) {
        v1.push_back(0);
    }
    while (v2.size()<32) {
        v2.push_back(0);
    }

    ll ans=0;
    for (int i=0; i<32; i++) {
        if (v1[i]==v2[i]) {
            ans++;
        } else {
            break;
        }
    }
    ll count=(1LL<<ans);
    return count;
}

int main() {
    fastio;
    int t;
    cin>>t;
    while (t--) {
        ll x,y;
        cin>>x>>y;
        cout<<solve(x,y)<<endl;
    }
    return 0;
}
