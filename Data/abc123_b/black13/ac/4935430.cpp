#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

ll Mod = 1e9 + 7;
ll M = -1;
int main()
{
    int x[5], sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> x[i];
        sum += (x[i]+9)/10*10;
        if (M < ((x[i]+9)/10*10 - x[i])) M = (x[i]+9)/10*10 - x[i];
        
    }
    //cout << M << endl;
    cout << sum - M << endl;
    return 0;
}