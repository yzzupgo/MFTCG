#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> menu(5);
    int count = 0, ans = 0 , max = 0;

    for(int i = 0; i <5; i++){
    cin >> menu.at(i);
    }
    for(int i =0; i < 5; i++){
        for(int k =0; k < 11; k++){
            if(menu.at(i)%10 == 0){
                count = 0;
                break;
            }else{
                menu.at(i)++;
                count++;
                if(max < count){
                    max++;
                }
            }
        }
    }
    for(int i = 0; i < 5; i++){
        cout << menu.at(i) << endl;
        ans = ans + menu.at(i);
    }
    cout << max << ans - max;
}