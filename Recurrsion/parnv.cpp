#include<iostream>
using namespace std;

void print(int k){
    // if(k==0)
    // return;
    cout<<k<<" ";

    print(k-1);
}

int main(){
    int pk;
    // cin>>pk;
    // cout<<pk;
    // pkLand();
    print(10);
    return 0;
}