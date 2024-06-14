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

int main(){
    fastio;
    string s;
    cin>>s;
    vc v;
    for(int i=0; i<s.length(); i++){
        if(isdigit(s[i]))
        v.eb(s[i]);
    }

    int n=count(s.begin(),s.end(),'+');
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        if(i!=n)
            cout<<v[i]<<'+';
        else
            cout<<v[i];
    }

    // //Method 2:
    // for(int i=0; i<=s.length(); i=i+2){
    //     for(int j=i+2; j<=s.length(); j +=2){
    //            if(s[i]>s[j]){
    //                swap(s[i],s[j]);
    //            }
    //        }
    // }
    // cout<<s;
    
}