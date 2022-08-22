#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> i_i;
typedef pair<ll, ll> l_l;
 
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
//const ll mod = 1000000007;

int main() {
    int a[5],b[5];
    int last = INF;
    int mem1,mem2,sum = 0;
    for (int i=0;i<5;i++) {
        cin >> a[i];
        b[i] = a[i]%10;
        if (b[i]!=0) {
            if (last >= b[i]) {
                last = b[i];
                mem1 = a[i];
                mem2 = i;
            }
            a[i] = (a[i]/10) + 1;
            a[i] = a[i] * 10;
        }
        sum += a[i];
    }
    if (last = INF) {
        cout << sum << endl;
        return 0;    
    }
    sum -= a[mem2];
    sum += mem1;
    cout << sum << endl;
}