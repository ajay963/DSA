#include <iostream>
using namespace std;

int main(){
    int loop10,loop11,loop12,limit;
    int num1,num2;

    cin>>limit;

    for(loop10=0;loop10<limit;loop10++){
        num1=loop10+1;
        num2=1;
        for(loop11=0;loop11<limit-(loop10+1);loop11++)
        cout<<" ";
        for(loop12=0;loop12<(2*loop10+1);loop12++)
        (num1>=1)?cout<<num1--:cout<<++num2;

        cout<<endl;
    }
    return 0;
}