#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num==1) return false;

    for(int i=2;i<num;i++){
        if(num%i==0) return false;
    }
    return true;
}

int primeOut(int n){
    int ctr=0;
    
    for(int i=1;i<=n;i++){
        if(isPrime(i)) 
        ctr++;
    }

    return ctr;
}       
int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n>1){
        n=n-primeOut(n);
        ans++;
    }
    cout<<ans+1;
    return 0;
}