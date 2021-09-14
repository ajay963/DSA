#include <iostream>
#include <climits>
using namespace std;

int main(){
    int num;
    cin>>num;
    int arr[num];

    for (int loop1=0;loop1<num;loop1++)
    cin>>arr[loop1];

    //loop for finding max and min no.
    int max_no=INT16_MIN,min_no=INT_MAX;
    for (int loop1=0;loop1<num;loop1++){
           max_no=  max(max_no,arr[loop1]);
           min_no= min(min_no,arr[loop1]);
    }
cout<<"MAX :"<<max_no<<" "<<"MIN :"<<min_no;
 return 0;
}