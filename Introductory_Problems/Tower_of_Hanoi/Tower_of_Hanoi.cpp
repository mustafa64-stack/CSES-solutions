/*
 * Problem Name: Tower_of_Hanoi
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-26
 */

#include <bits/stdc++.h>
using namespace std;
void solve(int discs,int from,int to,int aux){
    if(discs==1) {cout<<from<<" "<<to<<endl;
        return ;}
 
    solve(discs-1,from,aux,to);
    cout<<from<<" "<<to<<endl;;
    solve(discs-1,aux,to,from);
    
}
int main(){
    int n;
    cin>>n;
    cout<<(1<<n)-1<<"\n";
    solve(n,1,3,2);
}