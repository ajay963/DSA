#include<iostream>
using namespace std;


int factorial(int num){
    int factorial=1;
   for(int loop1=1;loop1<=num;loop1++)
      factorial*=loop1;
   
  return factorial; 
}
int main(){
    int num;
    cin>>num;

    cout<<factorial(num);
    return 0;
}