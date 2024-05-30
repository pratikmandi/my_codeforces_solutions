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
#include <string>
#include <cctype>

//--------------------------------------------------------//

bool isStrongPassword(const string& password) {
    vc letters, digits;

    for (char ch:password) {
        if (isdigit(ch)) {
            digits.pb(ch);
        } else if (islower(ch)) {
            letters.pb(ch);
        }
    }

    for (int i = 1; i<digits.size(); ++i) {
        if (digits[i]<digits[i-1]) {
            return false;
        }
    }

    for (int i = 1; i<letters.size(); ++i) {
        if (letters[i]<letters[i-1]) {
            return false;
        }
    }

    bool foundLetter = false;
    for (char ch:password) {
        if (islower(ch)) {
            foundLetter = true;
        } else if (isdigit(ch) && foundLetter) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        
        cin>>n>>s;

        if (isStrongPassword(s)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}