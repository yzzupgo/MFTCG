#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    vector<int> order(5);
    cin >> order[0] >> order[1] >> order[2] >> order[3] >> order[4];

    int last = order[0] % 10,last_n = 0;
    for(int i = 0;i < 5;i++){
        if(last > order[i] % 10 && order[i] % 10 != 0){
            last = order[i] % 10;
            last_n = i;
            cout << last;
        }
    }

    int ans = 0;
    for(int i = 0;i < 5;i++){
        if(i != last_n){
            if(order[i] % 10 == 0){
                ans += order[i];
            }
            else{
                ans += (order[i] / 10 + 1) * 10;
            }
        }
        else{
            ans += order[i] - last;
            ans += last;
        }
    }

    cout << ans;

    return 0;
}