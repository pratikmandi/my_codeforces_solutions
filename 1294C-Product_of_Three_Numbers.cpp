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

// ================================== take ip/op like vector,pairs directly!==================================//
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD> > &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ================================================//

void solve()
{
    int n;
    cin>>n;
    int a=0,b=0;
 
    for (int i=2; i*i<=n; i++) {
        if (n%i==0) {
            a=i;
            n /= i;
            break;
        }
    }
 
    if (a==0) {
        cout<<"NO"<<endl;
        return;
    }
 
    for (int i=a+1; i*i<=n; i++) {
        if (n%i==0) {
            b=i;
            break;
        }
    }
 
    if (b==0) {
        cout<<"NO"<<endl;
        return;
    }
 
    if (n/b<2 || (n/b==b || n/b == a)) {
        cout<<"NO"<<endl;
        return;
    }
 
    cout<<"YES"<<endl;
    cout<<a<<' '<<b<<' '<<n/b<<endl;
}

int main(){
    fastio;
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}