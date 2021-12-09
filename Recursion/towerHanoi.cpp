// tower of hanoi 
#include<bits/stdc++.h>
using namespace std;

void solve(int source,int helper,int destination,int n,int &ctr){
    if( n==1){
    cout<<source<<" --> "<<destination<<endl;
    return;}
    ctr++;
    solve(source,destination,helper,n-1,ctr);
    cout<<source<<" --> "<<helper<<endl;
    ctr++;
    solve(helper,source,destination,n-1,ctr);
    return;
    }

int main(){
    int n = 3;
    int count = 0;
    int source = 1;
    int helper = 2;
    int destination = 3;
    solve(source,helper,destination,n,count);
    cout<<count;
    return 0;
}