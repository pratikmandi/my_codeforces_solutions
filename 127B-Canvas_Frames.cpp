#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,count=0,pair=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    for(int i=0; i<n; i++){
        if(v[i]==v[i+1]) {
            pair++;
            i++;
        }
    }
    count +=pair/2;
    cout<<count;
    
    return 0;
}