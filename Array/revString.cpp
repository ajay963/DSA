#include<iostream>
#include<vector>
using namespace std;

string revSt(string str){
    int st = 0;
    int end  = str.length()-1;

    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    return str;
}

int isPalindrome(string s){
    int end = s.size() -1;
    int st = 0;
   
     while(st<end){ 
         if(s[st] != s[end])
         return 0;
         st++;
         end--;
	}   
    return 1;
}

void reverseString(vector<char> s) {
 
   for(int i = s.size()-1; i>=0 ; i--) cout<<s[i];
    
}


string revkthString(string str,int k){
    int st = 0;
    int end  = k-1;

    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    return str;
}

int main(){
    string str = "okkok";
   vector<char> s = {'H','e','l','l','o'};
    char s1[5] = {'H','e','l','l','o'};
//    reverseString(s);

    // cout<<revSt(revSt(str));
    cout<< isPalindrome(str);
    return 0;
}