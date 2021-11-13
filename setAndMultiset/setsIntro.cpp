#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(4);
    for(auto i:s)
    cout<<i<<" ";
    cout<<endl;
    
    for(auto i = s.rbegin(); i != s.rend(); i++)
    cout<<*i<<" ";
    s.erase(s.begin());
    s.erase(3);
    
    cout<<endl;
    for(auto i:s)
    cout<<i<<" ";
    return 0;
}