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
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;
typedef set<int> si;
typedef set<char> sc;
typedef long long ll;
typedef unsigned long long ull;

// ================================== take ip/op like vector,pairs directly!==================================//
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD> > &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ================================================//

void solve() {
    ll n, usualPrice, modifiedPrice;
    cin >> n >> usualPrice >> modifiedPrice;
 
    if (modifiedPrice < usualPrice) {
        cout << n * usualPrice << endl;
    } else {
 
        ll num_modified_buns = min(n, modifiedPrice - usualPrice);
 
        ll num_usual_buns = n - num_modified_buns;
 
        ll last_modified_price = modifiedPrice - num_modified_buns;
        ll max_profit = num_usual_buns * usualPrice + (modifiedPrice * (modifiedPrice + 1) / 2) - (last_modified_price * (last_modified_price + 1) / 2);
 
        cout << max_profit << endl;
    }
 
    return;
}
 
int main() {
    fastio;
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}