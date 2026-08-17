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
    vector <int> a(n);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int flag=0;
    for(int i=1;i<=n;i++){
        if(i!=a[i-1]) flag=i;
    }cout<<flag;
}