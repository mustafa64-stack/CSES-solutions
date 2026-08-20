/*
 * Problem Name: Two_Sets
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-20
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    set<int> a,b;
    if(n*(n+1)%4==0) {
        cout<<"YES"<<"\n";
        long long  target=n*(n+1)/4;
        for(int i=n;i>=1;i--){
            if(i<=target){
                a.insert(i);
                target-=i;
            }else {
                b.insert(i);
            }
        }cout<<a.size()<<"\n";
        for (long long i : a) cout<<i<<" ";
        cout << "\n";
        cout << b.size() << "\n";
        for (long long i : b) cout<<i<<" ";
        cout<<"\n";
    }else cout<<"NO"<<endl;
}