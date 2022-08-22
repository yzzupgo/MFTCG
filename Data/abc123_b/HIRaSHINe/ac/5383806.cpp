#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int A[5];
    for(int i=0; i<5; i++)
        cin >> A[i];
    int k, flag=0;
    for(int i=0;i<5;i++){
        if(A[i] % 10 != 0){
            k = i;
            flag = 1;
            break;
        }  
    }
    if(flag == 0)
        k = 4;
    for(int i=k+1; i<5; i++){
        if(A[i] % 10 < A[k] % 10 && A[i] % 10 != 0)
            k = i;
    }
    int time=0;
    for(int i=0; i<5; i++){
        if(i == k){
            time += A[i];
        }else{
            if(A[i] % 10 == 0)
                time += A[i];
            else
                time += (A[i] / 10) * 10 + 10;
        }
    }
    
    cout << time << endl;
}
