#include<iostream>
using namespace std;



int main(){
    short int lines;
    cin>>lines;

    for(int x=0;x<lines;x++){
         short int odd=2*x+1; 
     for(int z=lines-x+1;z>0;z--)
     cout<<" ";
     for (int y = 0; y<odd; y++)
     {
        cout<<"*";
     }cout<<"\n";}

     return 0;
     
}