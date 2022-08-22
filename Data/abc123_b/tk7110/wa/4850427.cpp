#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {};
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    int mi = 10;
    int num;
    for(int i = 0; i < 5; i++){
        if(a[i]%10 != 0){
            if(a[i]%10 < mi){
                mi = a[i]%10;
                num = i;
            }
        }
    }
    cout << mi << " " << num << endl;
    int ans = 0;
    for(int i = 0; i < 5; i ++){
        if(num != i && a[i]%10 != 0){
            ans += a[i]+(10-a[i]%10);
        }else{
            ans += a[i];
        }
    }
    cout << ans << endl;
}