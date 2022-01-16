#include<bits/stdc++.h>
using namespace std;

int makeItEqual(int a, int b, int c) {
    int ctr = 0;

    while(c>0 or a>0 or b>0){
        if(c%2==1){
           if(a%2==0)
               ctr++;

           if(b%2==0)
           ctr++;
        }
        else{  
            if(a%2==1 and b%2==1)
            ctr++;
        }
        c=c/2;
        a=a/2;
        b=b/2;
    }
    return ctr;
}



int main(){
    vector<bool> arr;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<makeItEqual(a,b,c);
    return 0;
}