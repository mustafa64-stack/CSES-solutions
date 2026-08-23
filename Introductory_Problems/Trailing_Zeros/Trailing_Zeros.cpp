/*
 * Problem Name: Trailing_Zeros
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-23
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,ans=0;
    cin>>n;
    for(long long i=5;i<=n;i*=5){
        ans+=(n/i);
    }cout<<ans<<endl;
}