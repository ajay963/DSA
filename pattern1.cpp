#include<iostream>
using namespace std;

int main(){
   int lines;
   cin>>lines;
   for(int x=1;x<=lines;x++){
       for(int y=1;y<=x;y++)
       cout<<"*";
       cout<<"\n";
   }

  return 0;
}