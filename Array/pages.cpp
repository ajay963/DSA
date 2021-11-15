#include<iostream>
using namespace std;

int pageCount(int n,int p){
    int count = p/2;
    int totalCount = n/2;

    return min(count,totalCount-count);
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<pageCount(n,p);
    return 0;
}