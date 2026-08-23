/*
 * Problem Name: Coin_Piles
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-23
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long m=max(a,b),mi=min(a,b);
        if((a+b)%3==0 &&(m<=2*mi)){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
}