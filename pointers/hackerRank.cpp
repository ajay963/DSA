#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int j=0;j<n;j++)
  cin>>arr[j];
 
 for(int j=n-1;j>=0;j--)
 cout<<arr[j]<<" ";
    return 0;
}
