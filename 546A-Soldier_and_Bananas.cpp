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

//--------------------------------------------------------//

//JUST FOR FUN ;/
int main(){
fastio;
    int n,k,w;
    ll cost=0;
    cin>>n>>k>>w;

    for(int i=1; i<=w; i++){
        cost+=i*n;
    }
    if(cost<= k){
		cout<<0<<"\n";
	}
	else
    cout<<cost-k;
}
