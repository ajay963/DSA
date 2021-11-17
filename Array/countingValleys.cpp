#include<iostream>
using namespace std;

int countValleys(int steps, string path){
    int valleys = 0;
    int sl = 0;
    for(int i = 0 ; i<steps; i++){
    (path[i] == 'U')?++sl:--sl;
    if( path[i]=='U' && sl==-1)
    ++valleys;
    }
    return valleys;
}                               

int main(){
    int steps;
    cin>>steps;

    string path;

    for(int i =0; i<steps ; i++)
    cin>>path[i];

    cout<<countValleys(steps,path);
    return 0;
}