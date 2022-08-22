#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> menu(5);
    int mini = 9;
    for (int i = 0; i < 5; i++){
        cin >> menu[i];
        if (menu[i]%10 != 0){
            mini = min(mini,menu[i]%10);
        }
    }

    int sum = 0;

    for (int i = 0; i < 5; i++){
        if (menu[i]%10 == 0){
            sum += menu[i];
        }else if (menu[i]%10 == mini && sum%10 == 0){
            sum += menu[i];
        }else{
            sum += (menu[i]/10)*10 + 10;
        }
    }

    cout << sum << endl;
}