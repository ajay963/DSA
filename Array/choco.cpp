#include <iostream>
using namespace std;

int maxChoco(int size){
    int max=0;
     int wrapper=size;
   do{
        max+=wrapper;
        wrapper = (size>3)?size/3:size + (size>3)?size%3:size ;
        size /= 3 ;
        cout<<wrapper<<" ";
    } while ( wrapper > 0 ) ;
    cout<<endl;
    return max;

    
}


int main(){
    int limits;
    cin>>limits;
    cout<<maxChoco(limits);
    return 0;
}