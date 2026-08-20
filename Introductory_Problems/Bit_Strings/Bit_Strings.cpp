/*
 * Problem Name: Bit_Strings
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-20
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,r=1e9+7;
    cin>>n;
    long long o=pow(2.0,n);
    cout<<o%r;
}