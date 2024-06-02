#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <cmath>
#include <utility>
#include <unordered_set>
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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

// ================================== take ip/op like vector,pairs directly!==================================//
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD> > &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================//

int solve(){
    int k;
    string s;
    cin>>k;
    cin>>s;
    

    //Method 1:
        map<char,int> mpp;
        for(auto x: s){
            mpp[x]++;
        }
        string ans ="";
        for(auto x:mpp){
            if(x.second%k) {
                cout<<-1<<endl;
                return 0;
            }
            ans+=string(x.second/k,x.first);
        }

    //Method 2:
        // vi v(26);

        // for (char ch : s) {
        //     v[ch-'a']++;
        // }
        
        // string ans="";
        // for (int i=0; i<26; i++) {
        //     if (v[i]%k!=0) {
        //         cout<<-1<<endl;
        //         return 0;
        //     }
        //     ans +=string(v[i]/k,'a'+i);
        // }

    for(int i=0; i<k; i++){
        cout<<ans;
    }
    cout<<endl;
    return 0;
}

int main(){
    fastio;
    solve();
}