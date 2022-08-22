#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define repi(i, s, e) for (int i = (s); i < (e); ++i)
using namespace std;
using ll = long long int;

int main()
{
    int a[5];
    int n = 5;
    repi(i, 0, n) cin >> a[i];

    int b[5];
    int min = 9;
    int itr = 0;
    repi(i, 0, n) {
        b[i] = (a[i]-1)%10;
        if(min>b[i]) min = b[i], itr = i;
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(i!=itr) ans+=((a[i]-1)/10)*10+10;
    }
    ans += a[itr];

    cout << ans << endl;

    //cout << itr << endl;

    return 0 ;
}