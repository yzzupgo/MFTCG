#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int a[5];
    rep(i,5) {
        cin >> a[i];
    }

    int ibuff;
    int min=10;
    int minpos=0;
    rep(i,5) {
        ibuff = a[i]%10;
        if (ibuff !=0 && min>ibuff) {
          min = ibuff;
          minpos=i;
        }
    }
    int totaltime=0;
    rep(i,5) {
        if (i!=minpos) {
            totaltime += (a[i]/10)*10;
            if (a[i]%10) totaltime += 10;
        }
    }
    if (min!=10) {
        totaltime += a[minpos];
    }

    cout << totaltime << endl;
    return 0;
}