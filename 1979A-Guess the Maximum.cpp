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

int solve(){
    int n;
    cin>>n;
    vi v(n);
    cin>>v;
    
    // //Method 1: Binary Search
    //     int low=0, high=*max_element(v.begin(), v.end()), ans=0;
            
    //     while (low<=high) {
    //         int mid=(low+high)/2;
    //         bool found=true;
                
    //         for (int i=0; i<n-1; i++) {
    //             if (max(v[i],v[i+1])<=mid) {
    //                 found=false;
    //                 break;
    //             }
    //         }
                
    //         if (found){
    //             ans=mid;
    //             low=mid+1;
    //         } else {
    //             high=mid-1;
    //         }
    //     }
    //     cout<<ans<<endl;

    //Method 2:
        int count=1e9;
        for(int i=0; i<n-1; i++){
            count=min(count, max(v[i],v[i+1])-1);
        }
        cout<<count<<endl; 
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