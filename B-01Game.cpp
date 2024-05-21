/*LOGIC:
1. Find number of moves can be performed in different pairs.
2. The number of moves can be observed as the minimum of number of zero/ones i.e. min(zero,ones) 

Alice wins if number of moves are odd, else Bob wins*/

#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        int zeros=0,ones=0;
        cin>>s;
        for (auto i:s){
            if(i=='0') {
                zeros++;
            } else {
                ones++;
            }
        }
        if(min(zeros,ones)%2 == 1) {
            cout<<"DA"<<endl;
        }else{
            cout<<"NET"<<endl;
        }
    }
}