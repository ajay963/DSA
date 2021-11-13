#include<iostream>
using namespace std;


int catlanSum(int n){
  if(n <=1 )
  return 1;
  int sum = 0;
  for(int j = 0; j<n; j++){
  sum += catlanSum(j) * catlanSum(n-j-1);
  }
  return sum;
}

int main(){
    for(int j=0; j<10; j++)
    cout<<catlanSum(j)<<" f";
    return 0;
}