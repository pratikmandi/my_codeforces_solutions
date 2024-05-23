#include <iostream>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    cout.tie(NULL);
    
    int q;
    ll n;
    cin>>q;
    while(q--){
        cin>>n;
        int count2=0,count3=0,count5=0;
        while (n%2==0) count2++,n/=2;
        while (n%3==0) count3++,n/=3;
        while (n%5==0) count5++,n/=5;
        if (n!=1) cout<<"-1\n";
        else cout<<count2+2*count3+3*count5<<"\n";
    }
}