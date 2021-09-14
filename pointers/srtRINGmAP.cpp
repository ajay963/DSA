#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string str="someOfMYYNamEE";
    // for(int j=0;j<str.size();j++)
    // if(str[j]>='a'&&str[j]<='z')
    // str[j]-=32;

    transform(str.begin(), str.end(), str.begin(), ::toupper);
cout<<str<<endl;

    //  for(int j=0;j<str.size();j++)
    // if(str[j]>='A'&&str[j]<='Z')
    // str[j]+=32;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout<<str;
    return 0;
}