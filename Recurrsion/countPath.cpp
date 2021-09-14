#include<iostream>
using namespace std;

int countPath(int s,int e){
    if(s==e)
    return 1;
    if(s>=e)
    return 0;
   
   int count =0;
   for(int j=1;j<=6;j++){
   count+=countPath(s+j,e);
   }
   return count;

}

int main(){
    cout<<countPath(0,3);
    return 0;
}