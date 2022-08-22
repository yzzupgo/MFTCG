#include <bits/stdc++.h>
using namespace std;

bool isOdd(int x){
    int keta = 0;
    while(x){
        keta++;
        x /= 10;
    }
    return keta % 2 == 1;
}

int main(){
    int N;
    cin >> N;
    int ans = 0;
    for(int i=1; i<=N; i++){
        if(isOdd(i)) ans++;
    }
    cout << ans << endl;
}