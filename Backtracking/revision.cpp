#include <bits/stdc++.h>
#include <string>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    int size = grades.size();
    vector<int> score; 
    
    for(int j=0;j<size;j++){
        int data = ((grades[j]/5)+1)*5;
      if(grades[j]<38)
      score.push_back(grades[j]);       
    else if(data-grades[j]<3){
    score.push_back(grades[j]+data-grades[j]);
    }
    else
    score.push_back(grades[j]);
    }
    return score;
}
int main(){
    
    vector<int> grades = {73,67,38,33};

    for(int j=0;j<grades.size();j++){
        cin>>grades[j];
    }
    grades = gradingStudents(grades);

    for(int j=0;j<grades.size();j++)
    cout<<grades[j]<<endl;
    return 0;
}