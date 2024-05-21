#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
        vector<int> arr(n);
        for(auto &i:arr){
            cin>>i;
        }
        sort(arr.begin(),arr.end(),greater<int>());
        
        /*for(const auto i:arr){
            cout<<i<<" ";
        }
        cout<<endl;*/
        
        int count=0;
        for(int i=0; i<n; i++) {
            if (arr[i] != 0 && arr[i]>=arr[k-1]){
                count++;
            }
        }
        cout<<count;
}