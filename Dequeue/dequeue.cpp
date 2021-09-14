#include<deque>
#include<iostream>
using namespace std;

int main(){
    deque<int> de;
    
    for(int j=1;j<=5;j++)
    de.push_front(j*2);

    for(int j=0;j<6;j++)
    de.push_back(j+2);

    for(auto i:de){
        cout<<i<<" ";
    }

    cout<<endl;

    de.pop_back();
    de.pop_back();
    de.pop_back();
    de.pop_front();
    de.pop_front();
    de.pop_front();

      for(auto i:de){
        cout<<i<<" ";
    }

    cout<<endl<<de.size();
    return 0;
}