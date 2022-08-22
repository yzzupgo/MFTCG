#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0;i < n; i++)

using namespace std;

int main() {
    int n[5];
    rep(i, 5){
        cin >> n[i];
    }
    int digit[5];
    rep(i, 5){
        digit[i] = (n[i] % 100) % 10;
    }
    int sum, ans = 0;
    rep(i, 5){
        sum += digit[i];
    }
    if(sum == 0){
        rep(i, 5){
            ans += n[i];
        }
        cout << ans << endl;
        return 0;
    }
    int index = -1;
    for(int i = 1; i < 10; i++){
        rep(j, 5){
            if(digit[j] == i){
                index = j;
                break;
            }
        }
        if(index != -1){
            break;
        }
    }
    rep(i, 5){
        if(i == index){
            continue;
        }
        if(digit[i] != 0){
            n[i] += (10 - digit[i]);
        }
        ans += n[i];
    }
    ans += n[index];
    cout << ans << endl;
}
