#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int A;
    int ans = 0;
    int min_ = 10;
    for(int i = 0; i < 5; ++i){
        cin >> A;

        int A_, A__;
        A_ = A/10;
        if(A%10 != 0){
            A_++;
            min_ = min(min_,A%10);
        }
        ans += A_;
    }
    cout << (ans-1)*10 + min_ << endl;
    return 0;
}