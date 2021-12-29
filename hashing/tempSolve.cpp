#include<bits/stdc++.h>
using namespace std;

int makeBeautiful(string str) {
	int ctr = 0;
    
    if(str[0]=='1'){
        for(int i=0;i<str.size();i++){
            if(i%2==0 and str[i]=='0'){
                str[i]=1;
                ctr++;
            }else if(i%2==1 and str[i]=='1'){
                str[i]=0;
                ctr++;
            }
            return ctr;
        }
    }else{
        for(int i=0;i<str.size();i++){
            if(i%2==0 and str[i]=='1'){
                str[i]=0;
                ctr++;
            }
            else if(i%2==1 and str[i]==0){
                str[i]=1;
                ctr++;
            }
            return ctr;
        }
    }
    return ctr;
}

int main(){
  string str = "000000";
  cout<<makeBeautiful(str);
  return 0;
}