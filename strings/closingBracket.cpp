#include<bits/stdc++.h>
using namespace std;

int closingBracket(string str, int pos) {   
    int x =0;
            stack<int> count;
        	for(int i=0; i<str.size(); i++){
        	    if(str[i]=='[')
        	    count.push(i);
        	    
        	    if(str[i]==']'){
        	    x=count.top();
        	    count.pop();}
        	    
        	    if(x==pos and i>pos)
        	    return i;
        }
        	return -1;
}

int main(){
    string str = "[ABC[23]][89]";
    cout<<closingBracket(str,0);
    return 0;
}