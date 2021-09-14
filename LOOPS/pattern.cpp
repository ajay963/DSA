#include<iostream>
using namespace std;

int main(){
int loop1,loop2,limit;
cin>>limit;
for(loop1=0;loop1<limit;loop1++){
    for(loop2=0;loop2<limit*2;loop2++)
       (loop2<=loop1||loop2>=(limit*2)-loop1)?cout<<"*":cout<<" ";
    cout<<endl;
  }
  return 0;
}