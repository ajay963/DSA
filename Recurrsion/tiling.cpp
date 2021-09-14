#include<iostream>
using namespace std;

int tileCount(int n){
   if(n==1)
   return 1;
   if(n==0)
   return 0;

   int count=0;
   count = tileCount(n-1)+tileCount(n-2);
   return count; 
}

int main(){
    cout<<tileCount(4);
    return 0;
}