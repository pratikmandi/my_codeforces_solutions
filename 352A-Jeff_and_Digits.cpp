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

void solve(){
    int n; cin>>n;
    vi v(n);
    cin>>v;
 
    int zero=0, five=0;
    for(auto i: v){
      if (i == 5){
            five++;
         }else{
            zero++;
         }
      }
 
    if (zero == 0)
        cout << -1;
    else if (five < 9)
        cout << 0;
    else
    {
        while(true){
            if (five % 9 == 0)
            {
                break;
            }
            else
            {
                five -= 1;
            }
        }
        
        for (int i=0; i<five; i++)
        {
            cout<<5;
        }
        for (int i=0; i<zero; i++)
        {
            cout<<0;
        }
    }
}
 
int main() {
    fastio;
    solve();
    
    return 0;
}