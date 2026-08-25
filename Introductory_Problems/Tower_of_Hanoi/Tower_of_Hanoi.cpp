/*
 * Problem Name: Tower_of_Hanoi
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-25
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<2*n-1<<"\n";
    for(int i=1;i<=n-1;i++){
        cout<<"1 2\n";
    }cout<<"1 3\n";
    for(int i=1;i<=n-1;i++){
        cout<<"2 3\n";
    }
}