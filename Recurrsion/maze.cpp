#include<iostream>
using namespace std;

int countPath(int sCol,int sRow,int n){
    if(sCol==n-1 || sRow == n-1)
    return 1;
    // if(sCol>=n || sRow >=n)
    // return 0;
    
   int count=0;
   count+= countPath(sCol+1,sRow,n) + countPath(sCol,sRow+1,n);
    return count;
}
int main(){
    cout<<countPath(0,0,3);
    return 0;
}