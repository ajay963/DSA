#include<iostream>
using namespace std;

int main(){
    int loop1,loop2,limit;
    
    cin>>limit;

    for(loop1=0;loop1<limit;loop1++){
        for(loop2=1;loop2<=limit-loop1;loop2++)
           cout<<loop2<<" ";
    cout<<endl;}

     return 1;
}