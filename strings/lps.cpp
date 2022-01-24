//objective of this code to make LPS array
//used for KMP algo and various other problem statement
#include<bits/stdc++.h>
using namespace std;

vector<int> lpsComputing(string pat){
  vector<int> lps(pat.length(),0);  // <- initilizing vector with pat.lenght size and all value with zero
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
  return lps;
}

void pattSearch(string txt,string patt){
    vector<int> lps = lpsComputing(patt);
    int i =0;
    int j =0;
    while(i<txt.length()){
        if(txt[i] == patt[j]){
            i++;
            j++;
        }
        if(j == patt.length()){
            cout<<i-j<<" ";
            j = lps[j-1];
        }
        else if(i<txt.length() and txt[i] != txt[j]){
            ( j!= 0) ? j = lps[j-1] : i++;
        }
    }
} 

int main(){
    string txt = "abcabcabddeabc";
    string pat = "abc";
    pattSearch(txt,pat);
    return 0;
}