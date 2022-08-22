#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> time(5), rem(5);
    int res = 0, min = 10, min_index = 0;

    for(int i = 0; i < 5; ++i)
    {
        cin >> time[i];
        rem[i] = time[i] % 10;

        if(rem[i] != 0 && rem[i] < min)
        {
            min = rem[i];
            min_index = i;
        }
    }

    for(int i = 0; i < 5; ++i)
    {
        if(i == min_index) res += time[i];
        else if(rem[i] == 0) res += time[i];
        else res += time[i] + 10 - rem[i];
    }
    
    cout << res << "\n";
    
    return 0;
}