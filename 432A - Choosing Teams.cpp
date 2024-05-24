#include <iostream>
using namespace std;


int main() {
    int n,k,cnt=0,p;
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        cin>>p;
        if(p+k<=5) {
            cnt++;
        }
    }
    cout<<cnt/3<<endl;
}