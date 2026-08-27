/*
 * Problem Name: Creating_Strings
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-27
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector<string> ss;
    cin>>s;
    sort(s.begin(),s.end());
    do{
        ss.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<ss.size()<<"\n";
    for(auto c:ss) cout<<c<<"\n";
 }