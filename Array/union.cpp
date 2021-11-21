// Union of two arrays 
#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        map<int,int> uq;
        int it1 =0, it2 = 0;
        while(it1 < n or it2 < m){
            uq[a[it1++]]++;
            uq[b[it2++]]++;
        }
        return uq.size();
    }

    int main(){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];

        for(int i =0 ;i<n ; i++)
        cin>>a[i];

        for(int i =0 ;i<m ; i++)
        cin>>b[m];

        cout<<doUnion(a,n,b,m);
        return 0;
    }