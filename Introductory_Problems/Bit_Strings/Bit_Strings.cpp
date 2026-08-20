/*
 * Problem Name: Bit_Strings
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-20
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long mod=1e9+7,ans=1;
    for(long long i=1;i<=n;i++) ans=(ans*2)%mod;
    cout<<ans;
}