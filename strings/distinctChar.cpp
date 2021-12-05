// finding length of longest distinct in a string
#include<bits/stdc++.h>
using namespace std;

int longeatDistinctString(string str){
    int n = str.length();
    int res = 0;
    vector<bool> visited(256,false);
    for(int i=0; i<n ; i++){
        for(int j=i; j<n ; j++){
            if(visited[str[j]] == true)
            break;
            else{
                res = max(j-i+1,res);
                visited[str[j]] = true;
            }
        }
        visited[str[i]] = false;
    }
    return res;
}

int main(){
    string str = "xsxsexdvfsax";
    cout<<longeatDistinctString(str);
    return 0;
}