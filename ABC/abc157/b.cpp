#include <iostream>
using namespace std;

int main(){
      int A[3][3];
      bool flag = false;

      for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                  cin >> A[i][j];
            }
      }
 
      int N;cin >> N;
      for(int i = 0; i<N;i++){
            int b;cin >>b;
             
            for(int i=0;i<3;i++){
                  for(int j=0;j<3;j++){
                        if(A[i][j] == b){
                              A[i][j] = -1;
                              
                        }
                  }
            }
      }
      if(A[0][0] == -1){
            if(A[1][0] == -1 && A[2][0] == -1){
                        flag =true; 
            }else if(A[1][1] == -1 && A[2][2] == -1){
                        flag=true;
            }else if(A[0][1] == -1 && A[0][2] == -1){
                        flag = true;
            }
      }else if(A[0][1] == -1){
            if(A[1][1] == -1 && A[2][1] == -1){
                  flag = true;
            }
      }else if(A[0][2] == -1){
            if(A[1][1] == -1 && A[2][0] == -1){
                  flag = true;
            }else if(A[1][2] == -1 && A[2][2] == -1){
                  flag = true;
            }
      }else if(A[1][0] == -1){
            if(A[1][1] == -1 && A[1][2] == -1){
                  flag = true;
            }
      }else if(A[2][0] == -1){
            if(A[2][1] == -1 && A[2][2] == -1){
                  flag = true;
            }
      }
      
      if(flag == true){
            cout << "Yes" << endl;
      }else{
            cout << "No" << endl;
      }
}

