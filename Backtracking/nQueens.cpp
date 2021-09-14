#include<iostream>
using namespace std;


bool isSafe(int x,int y,int n,int** arr){
    for(int row=0;row<=x;row++){
        if(arr[row][y]==1)
        return false;
    }
    int row = x;
    int col = y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1)
        return false;
        row--;
        col--;
    }

    row = x;
    col = y;
    while(row>=0 && col<n){
        if(arr[row][col]==1)
        return false;
        row--;
        col++;
    }
   return true;
}

bool queens(int x,int n,int** arr){
if(x==n){
return true;
}
 
 for(int col=0;col<n;col++){
   if(isSafe(x,col,n,arr)){
     arr[x][col]=1;

     if(queens(x+1,n,arr))
     return true;

     arr[x][col]=0;
   }
 }
 return false;
 
}

int main(){
    int n;
    cin>>n;

    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
         arr[i][j]=0;
    }

    


    cout<<queens(0,n,arr)<<endl;

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
         cout<<arr[i][j]<<" ";
         cout<<endl;
    }
   return 0;
}





// bool rowChk(int x,int y,int** arr){
//     for(int j=0;x>=0;j--){
//          if(arr[x-j][y]==1)
//         return false;
//         x--;
//     }
//     return true;
// }

// bool colmChk(int x,int y,int** arr){
//     for(int j=0;y>=0;j--){
//           if(arr[x][y-j]==1)
//         return false;
//         y--;
//     }
//     return true;
// }

// bool d1Chk(int x,int y,int** arr){
//     for(int j=0;x>=0;j--){
//          if(arr[x-j][y-j]==1)
//         return false;
//         x--;
//     }
//     return true;
// }

// bool d2Chk(int x,int y,int n,int** arr){
//     for(int j=0;((x>=0)&&(y<n));j--){
//          if(arr[x-j][y+j]==1)
//         return false;
//         x--;
//         y++;
//     }
//     return true;
// }
