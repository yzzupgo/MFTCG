#include <bits/stdc++.h>
using namespace std;
int main(void){
    vector<int> A(5);
    for(int i = 0; i < 5; i++) cin >> A[i];
    int matsu = 9;
    int jun = 0;
    for(int i = 0; i < 5; i++){
        if(A[i] >= 100 && A[i] % 100 != 0){
            matsu = min(matsu,A[i] % 100);
            if(matsu == A[i] % 100) jun = i;
        }
        else if(A[i] < 100 && A[i] % 10 != 0){
            matsu = min(matsu,A[i] % 10);
            if(matsu == A[i] % 10) jun = i;
        }
    }
    //cout << matsu << " " << jun << endl;
    int jikan = 0;
    for(int i = 0; i < 5; i++){
        if(i == jun) jikan += A[i];
        else if(A[i] % 10 == 0) jikan += A[i];
        else jikan += A[i] /10 *10 +10;
    }
    cout << jikan << endl;
}
