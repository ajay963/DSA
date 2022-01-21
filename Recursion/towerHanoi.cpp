// tower of hanoi 
#include<bits/stdc++.h>
using namespace std;

void solve(char source,char helper,char destination,int n,int &ctr){
    ctr++;
    if( n==1){
    // ctr++;
    // cout<<source<<" --> "<<destination<<endl;
    return;}

    solve(source,destination,helper,n-1,ctr);
    // cout<<source<<" --> "<<helper<<endl;
    solve(helper,source,destination,n-1,ctr);
    return;
    }

int main(){
    int n = 20;
    int count = 0;
    char source = 'A';
    char helper = 'B';
    char destination = 'C';
    solve(source,helper,destination,n,count);
    cout<<count;
    return 0;
}