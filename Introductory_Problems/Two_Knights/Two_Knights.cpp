/*
 * Problem Name: Two_Knights
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-18
 */

#include <bits/stdc++.h>
using namespace std ;
int main(){
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        
        
        cout<<((i*i*(i*i-1))/2)-(4*(i-1)*(i-2))<<"\n";
    }
}