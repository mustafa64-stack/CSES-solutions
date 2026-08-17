/*
 * Problem Name: Missing_Number
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-17
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long ac=0,a;
    long long  sum=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        cin>>a;
        ac+=a;
    }cout<<abs(sum-ac);
    
}