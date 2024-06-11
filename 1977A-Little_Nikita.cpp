#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL),cout.tie(NULL);
    
    int t;
    cin>>t;
    
    while (t--) {
        int n,m;
        cin>>n>>m;
        
        if (m<=n && (n%2==m%2)) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}