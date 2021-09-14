#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    switch (num)
    {
    case 1:
     cout<<"Good one";
        break;
    case 2:
     cout<<"need some improvment";
     break;

     case 3:
      cout<<"Needs to starts from the beggning";
    default:
     cout<<"out of range";
        break;
    }
}