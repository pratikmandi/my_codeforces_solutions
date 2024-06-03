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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;

    //Method 1:
        unordered_map<char,int> mpp;
            for (char ch : s) {
                mpp[ch]++;
            }

        int problems_needed=0;
        string chars = "ABCDEFG";
        for (char ch:chars) {
            if (mpp[ch]<m) {
                problems_needed +=(m-mpp[ch]);
            }
        }
        cout<<problems_needed<<endl;

    //Method 2:
        // vi count(7, 0);
        //     for (char ch : s) {
        //         if (ch >= 'A' && ch <= 'G') {
        //             count[ch - 'A']++;
        //         }
        //     }

        // int problems_needed=0;
        //     for (int i = 0; i < 7; i++) {
        //         if (count[i] < m) {
        //             problems_needed += m - count[i];
        //         }
        //     }

        //     cout << problems_needed << endl;
}

int main(){
    fastio;
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}