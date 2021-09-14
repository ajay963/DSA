#include<iostream>
#include<stack>
using namespace std;

stack<string> revSentence(string st){
    string word;
    stack<string> wordSt;
    for(int j=0;j<st.length();j++){
        if(st[j]!=' '){
              word+=st[j];
        }
        else{
            wordSt.push(word);
            word = "";
           }
    }
    wordSt.push(word);
    return wordSt;
}

void print(stack<string> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
void insertAtBottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topEle = st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topEle);
}

void revStack(stack<int> &intStack){
    if(intStack.empty())
    return;

    int ele = intStack.top();
    intStack.pop();
    revStack(intStack);
    insertAtBottom(intStack,ele);
}



int main(){
    stack<int> stNo;
    string words = "Hey, are you there and who are you";
    
    stNo.push(10);
    stNo.push(12);
    stNo.push(14);
    stNo.push(16);
    stNo.push(18);

    revStack(stNo);
    
    while(!stNo.empty()){
        cout<<stNo.top()<<" ";
        stNo.pop();
    }

//    print(revSentence(words));

    return 0;
}