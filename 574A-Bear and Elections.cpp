#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    cout.tie(NULL);

    int n,i;
    cin>>n;
    vector<int> v(n);
    for(i=0; i<n; i++){
        cin >> v[i];
    }
    
    int cnt=0;
    int limak_votes=v[0];
    while(true){
        int k=-1,Max=0;
        for(i=1; i<n; i++){
            if(v[i]>Max) {
                Max=v[i];
                k=i;
            }
        }
        if (limak_votes>Max) {
            break;
        }
        v[k]--;
        limak_votes++;
        cnt++;
    }
    cout<<cnt<<endl;
    // for(auto i:v){
    //     cout<<i<<" ";
    // }
    return 0;
}