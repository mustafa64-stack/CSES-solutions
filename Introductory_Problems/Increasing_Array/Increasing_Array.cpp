/*
 * Problem Name: Increasing_Array
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-17
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum=0;
    vector <long long > a(n);
    for (int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for (int i=1;i<n;i++){
        
        if(a[i]<a[i-1]) {
            sum+=abs(a[i]-a[i-1]);
        } 
    }
    cout<<sum;
}