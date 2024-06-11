#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,cnt=0;
    double sum=0;
    cin>>n;
    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin>>v[i];
        sum +=v[i];
    }
    sort(v.begin(), v.end()); //reduces time complexity
    
    double avg=sum/n;
    for(int i=0; i<n; i++){
        if(avg<4.5){
            sum +=5-v[i];
            v[i] = 5;
            avg=sum/n;
            cnt++;
        } else {
            break;
        }
    }
    cout<<cnt;

    return 0;
}