// Hashing Implementaion using linkList
// time complexity o(1+l) where l is the length of linkList
#include<bits/stdc++.h>
using namespace std;

class Hash{
    public:
    int Bucket;
    list<int> *table;
    Hash(int b) {
        Bucket = b;
        table = new list<int> [Bucket]; 
    }
    int hash(int key) { return (key%Bucket); }
    
    bool search(int key){
        int i = hash(key);
        for(auto it:table[i])
        if(it == key)
        return true;
        return false;
    }
    void insert(int key){
        int i = hash(key);
        table[i].push_back(key);
    }

    void remove(int key){
        int i = hash(key);
        table[i].remove(key);
    }
};


int main(){
    Hash hh(10);
    hh.insert(1);
    hh.insert(12);
    hh.insert(31);
    hh.insert(45);
    hh.insert(98);
    hh.remove(12);
    cout<<hh.search(45)<<endl;
    cout<<hh.search(12)<<endl;
    
    return 0;
}