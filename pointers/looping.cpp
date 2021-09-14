#include <iostream>
#include <cstdio>
using namespace std;
string isEven(int n){
    if(n%2==0)
    return "even";
   
    return "odd";
}

int main() {
    string arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    int n1,n2;
    cin>>n1>>n2;
   for(int j=n1;j<=n2;j++){
       (j<=9)?
    cout<<arr[j-1]<<endl:
    cout<<isEven(j)<<endl;
      
   }

    return 0;
}
