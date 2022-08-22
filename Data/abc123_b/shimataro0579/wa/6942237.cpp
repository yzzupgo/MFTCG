#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int dish[5];
    int time = 0;
    int min_mod = 100;
    for(int i = 0;i < 5; i++){
        cin >> dish[i];
        if(dish[i] % 10 != 0){
            time += (dish[i] / 10) * 10 + (dish[i] % 10) + (10 - dish[i] % 10); 
            min_mod = min(min_mod, (dish[i] % 10));
        }else{
            time += dish[i] / 10 * 10;
        }
    }

    cout << time - (10 - min_mod) << endl;
}