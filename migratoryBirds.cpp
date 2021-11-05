#include<iostream>
#include<vector>
using namespace std;

int migratoryBirds(vector<int> arr) {
  vector<int> fre;
    for(int j=1;j<=arr.size();j++)
      fre[j] = 0;
  
  for(int j=1;j<=arr.size();j++)
      fre[arr[j]]++;
  
  int max = 0;
  int pos = 0;
  for(int j = 1;j<=fre.size();j++){
  if(fre[j]>max){
      max = fre[j];
      pos = j;
  }}
  return pos;
}

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(4);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(3);
    // 1 4 4 4 5 3
     cout<< arr.size();
    cout << migratoryBirds(arr);
    return 0;
}