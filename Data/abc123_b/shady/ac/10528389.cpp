#include <bits/stdc++.h>
using namespace std;
int main(void){
    vector<int> A(5);
    for(int i = 0; i < 5; i++) cin >> A[i];
    int C,Cmin;
    C = Cmin = 99999;
    int I = 0;
    for(int i = 0; i < 5; i++){
        C = A[i] % 10;
        if(C != 0) Cmin = min(C,Cmin);
        if(Cmin == C) I = i;
    }
    int S = 0;
    for(int i = 0; i < 5; i++){
        if(i == I) S += A[i];
        else if(A[i]%10 == 0)  S += A[i];
        else S += A[i]/10*10 + 10;
    }
    cout << S << endl;
}
