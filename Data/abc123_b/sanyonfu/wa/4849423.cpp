#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> menu(5);
    int count = 0, ans = 0;

    for(int i = 0; i <5; i++){
    cin >> menu.at(i);
    }
    for(int i =0; i < 5; i++){
        for(int k =0; k < 10; k++){
            if(menu.at(i)%10 == 0){
                count++;
                break;
            }else{
                menu.at(i)++;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        ans = ans + menu.at(i);
    }
    cout << ans - count;
}