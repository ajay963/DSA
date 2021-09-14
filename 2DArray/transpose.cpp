#include "bits\stdc++.h"
using  namespace std;

class Maths{
    public:
    string isPrime(int n){
     for(int j=1;j<=sqrt(n);j++){
          if(n%j==0)
          return "False";
         }
    return "True";
    }
};
int main(){
    Maths maths;
    int n;
    cout<<maths.isPrime(n);
    return 0;
}