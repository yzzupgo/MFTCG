#include<bits/stdc++.h>
using namespace std;

int main(){
    int mini = 10,num,ans = 0;
    vector<int> dish(5);
    cin >> dish[0] >> dish[1] >>dish[2] >>dish[3] >>dish[4];
    for(int i = 0;i < 5;i++){
        if(mini > 10 - (dish[i] % 10)){
            mini = dish[i] % 10;
            num = i;
        }
    }

    for(int i = 0;i < 5;i++){
        if(i == num)ans += dish[i];
        else{

            ans += ((dish[i] + 9) / 10 * 10);
        }
    }
    cout << ans << endl;
}