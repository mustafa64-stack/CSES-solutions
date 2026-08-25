/*
 * Problem Name: Gray_Code
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-25
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    int total =1LL<<n;
    for(int i=0;i<total;i++){
        int g=i^(i>>1);
        for(int j=n-1;j>=0;j--){
            cout<<((g>>j)&1);
        }cout<<"\n"
;    }
}