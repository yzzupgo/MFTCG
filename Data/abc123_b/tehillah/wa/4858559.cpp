#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5];
    for(int i=0; i<5; ++i) cin >> a[i];
    int res = 1000;
    do{
    int temp =0;
        for(int i=0; i<5; ++i){
            temp += a[i];
            while(temp % 10 != 0) ++temp;
        }
        res = min(res, temp );
    }while(next_permutation(a, a+5));
    cout << res <<"\n";
    return 0;
}