#include<iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int x[5];
    int y[5];

    for(int i = 0; i < 5; i++){
        cin >> x[i];
        y[i] = x[i]%10;
    }

    int count_not0 = 0;
    int min = 10;
    if(!(y[0]+y[1]+y[2]+y[3]+y[4])){
        cout << x[0]+x[1]+x[2]+x[3]+x[4];
    }else{
        for(int i = 0; i < 5; i++){
            if(y[i] != 0){
                count_not0++;
                if(y[i] < min){
                    min = y[i];
                }
            }
        }
    }

    int ans = (x[0]/10 + x[1]/10 + x[2]/10 + x[3]/10 + x[4]/10)*10 +10 * (count_not0-1) +min;

    cout << ans << endl;

    return 0;
}