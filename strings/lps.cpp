//objective of this code to make LPS array
//used for KMP algo and various other problem statement
#include<bits/stdc++.h>
using namespace std;

void lps(string pat){
  vector<int> lps(pat.length(),0);
  int len = 0;
  int i = 1;
  while(i<pat.length()){
      if(pat[i]==pat[len]){
          len++;
          lps[i] = len;
          i++;
      }
      else{
          if(len != 0)
          len = lps[len-1];
          else{
          lps[i] = 0;
          i++;
      }   }
     
  }
  for(int i =0; i<lps.size(); i++)
  cout<<lps[i]<<" ";
}

int main(){
    string txt = "abcabcabddeabc";
    string pat = "abc";
    lps("ccccc");
    return 0;
}