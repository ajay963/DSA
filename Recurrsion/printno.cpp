#include<iostream>
using namespace std;

void dec(int n){
    cout<<n<<endl;
    if(n!=0)
    dec(n-1);
}

void inc(int n){                                            
    if(n!=0)
    inc(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    inc(n);
    return 0;
}