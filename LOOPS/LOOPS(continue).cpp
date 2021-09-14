#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num;
    cin>>num;
        for(int x=0;x<=100;x++)  {     
            if(x%3==0)
             continue;
             else 
             cout<<x<<" "<<num<<"\n";
                           
             num-=12;
             if(num<=0){ 
                cout<<"Paisa khatm sb hazam";
                break;   }
    
    }
    getch();
    return 0;
}