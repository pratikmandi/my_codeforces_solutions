#include <iostream>
using namespace std;

int main(){
    int x,y,t;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cout<<min(x,y)<<" "<<max(x,y)<<endl;
    }
}