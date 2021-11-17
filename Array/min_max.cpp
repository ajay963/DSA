#include<iostream>
#include<vector>
using namespace std;

void minmax(vector<int> arr){
    int min = arr[0];
    int max = arr[0];
    
    for(int i = 1; i<arr.size(); i++){
     if(arr[i]>max)
     max = arr[i];

     if(arr[i]<min)
     min = arr[i];
    }
    cout<<"max: "<<max<<" min: "<<min;
}

int main(){
   vector<int> arr = { 1 ,2, 3, 4 ,5, 6, 7,8 ,9 ,10};
   minmax(arr);
    return 0;
}