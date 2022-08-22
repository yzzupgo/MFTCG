#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int A[5];
    for(int i=0; i<5; i++)
        cin >> A[i];
    int k=0;
    for(int i=1; i<5; i++){
        if(A[i] % 10 < A[k] % 10)
            k = i;
    }
    int time=0;
    for(int i=0; i<5; i++){
        if(i == k){
            time += A[i];
        }else{
            time += (A[i] / 10) * 10 + 10;
        }
    }
    
    cout << time << endl;
}
