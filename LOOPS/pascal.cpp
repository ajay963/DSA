#include <iostream>
using namespace std;

/*
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
*/

int factorial(int num){
    int factorial=1;
   for(int loop1=1;loop1<=num;loop1++)
      factorial*=loop1;
   
  return factorial; 
}

int combination(int num1,int num2){
    int combination=1;
      combination = factorial(num1) / (factorial(num1-num2) * factorial(num2)) ;
    return combination;
}

int main(){
    int loop10,loop11,loop12;
    int num;
     cin>>num;
    for(loop10=0;loop10<num;loop10++){
     for(loop11=0;loop11<(num-loop10);loop11++)
     cout<<" ";
     for(loop12=0;loop12<=loop10;loop12++)
     cout<<combination(loop10,loop12)<<" ";
     
     cout<<endl;
    }
  return 0;    
}