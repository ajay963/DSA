#include <iostream>
using namespace std;

int main(){
   int loop10,loop11,loop12;
   int limit;
   cin>>limit;

   for(loop10=0;loop10<limit;loop10++){
       for(loop11=0;loop11<limit-(loop10+1);loop11++)
       cout<<" ";
       for(loop12=0;loop12<=loop10;loop12++)
       cout<<loop12+1<<" ";
       cout<<endl;
   }
   return 0;
}