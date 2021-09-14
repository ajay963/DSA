#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int j=0;j<n;j++)
    cin>>a[j];
    
    const int  N = 1e6 + 2;
    bool chk[N];

    for(int j=0;j<N;j++)
    chk[j]=false;

    for(int j=0;j<n;j++){
        if(a[j]>=0)
        chk[a[j]]=true;
    }
   int min=0;
    for(int j=0;j<N;j++){
      if(chk[j]==false){
          cout<<j;
          return 0;
      }
    }
    return 0;
}