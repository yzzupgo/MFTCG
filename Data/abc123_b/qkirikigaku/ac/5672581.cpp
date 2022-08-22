#include<iostream>
using namespace std;

int main(){
    int time[5];
    cin >> time[0] >> time[1] >> time[2] >> time[3] >> time[4];
    int min_hitoketa=9; int min_index=0;
    int shou[5];
    for(int index=0; index<5; index++){
        if((time[index] % 10 < min_hitoketa ) && (time[index] % 10 != 0)){
            min_hitoketa = time[index] % 10;
            min_index = index;
            shou[index] = time[index] / 10;
            shou[index] += 1;
        }
        else if(time[index] % 10 == 0){
            shou[index] = time[index] / 10;
        }
        else{
            shou[index] = time[index] / 10;
            shou[index] += 1;
        }
    }
    int res = 0;
    for (int index=0; index<5; index++){
        if(index != min_index){
            res += shou[index] * 10;
        }
        else{
            res += (shou[index]-1) * 10 + min_hitoketa;
        }
    }
    int flag = 0;
    int sum = 0;
    for(int index=0; index<5; index++){
        if(time[index] % 10 != 0) flag = 1;
        sum += time[index];
    }
    if(flag == 1) cout << res << endl;
    else cout << sum << endl;
}
