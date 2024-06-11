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

int n,t;
    string s;
    cin>>n>>t;
    while (t--)
    {
        cin>>s;
        for (int i=0; i<n; i++)
        {
            if (s[i] == 'B' && s[i+1] == 'G')
            {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    cout<<s<<endl;
}