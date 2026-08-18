/*
 * Problem Name: Number_Spiral
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-18
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long n=max(x,y)-1;
        long long val=1+(n*(n+1));
        if(x==1 && y==1) cout<<1<<endl;
        else if(x==y) cout<<val<<endl;
        else if(y>x) {
            if(y%2!=0) cout<<val+(y-x)<<endl;
            else cout<<val-(y-x)<<endl;
        }else{
            if(x%2!=0) cout<<val-(x-y)<<endl;
            else cout<<val+(x-y)<<endl;
        }
    }
}