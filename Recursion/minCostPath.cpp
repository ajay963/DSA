#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> pathSoln;
int minCostPath = INT_MAX;

void printSt(int cost[4][4]){
  for(int i=0;i<4;i++){
  for(int j=0;j<4;j++){
     cout<<cost[i][j]<<"  ";
    }
  cout<<endl;
  }
}

void printPath(vector<int> path){
    cout<<endl;
    for(int i=0;i<path.size();i++)
    cout<<path[i]<<"->";
    cout<<"1";
    cout<<endl;
}
int minCost(int cost[4][4],int node,int costn,vector<bool> isVis,vector<int> path){
   
    
    path.push_back(node+1);
    isVis[node] = true;
    int costp = INT_MAX;

     if(path.size()==4){
        // printPath(path);
        if(minCostPath > cost[node][0] + costn){
        pathSoln.clear();    
        // for(auto it:path) pathSoln.push_back(it);

        // printPath(pathSoln);
        pathSoln = path;
        minCostPath = cost[node][0] + costn;
        }

        return cost[node][0] + costn;
    }
    
    for(int i=0;i<4;i++){
       if(isVis[i]==false){
        // cout<<node+1<<"->"<<i+1<<" ";
       costp = min(costp,minCost(cost,i,cost[node][i]+costn,isVis,path));
    //    cout<<endl;
       }
    }
     
    return costp;
}

int main(){
    
    int cost[4][4];
    vector<bool> isVis(4,false);
    vector<int> path;

    int temp=0;
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++){
        cin>>cost[i][j];
    }
    
    // printSt(cost);
    cout<<"Minimum Cost : "<<minCost(cost,0,0,isVis,path)<<endl;
   printPath(pathSoln);


    return 0;
}
