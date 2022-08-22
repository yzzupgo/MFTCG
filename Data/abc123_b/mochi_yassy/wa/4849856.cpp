#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <map>
 
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int order[5];

    cin >> order[0] >> order[1] >> order[2] >> order[3] >> order[4];

    int last = 4;
    int count = 0;
    int plus = 0;

    for(int i = 0; i < 4; i++) 
    {
        if((order[i] - 1) % 10 < (order[last] - 1) % 10)
        {
            last = i;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        if(i != last)
        {
            if(order[i] % 10 != 0)
            {
                plus = 10 - order[i] % 10;
            }
            count += order[i] + plus;
            cout << count << "\n";
            plus = 0;
        }
    }

    count += order[last];

    cout << count;
}