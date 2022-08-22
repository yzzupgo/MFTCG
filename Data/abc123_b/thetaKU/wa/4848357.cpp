#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)   for(signed i=0; i<n; i++)
#define FOR(i, k, n)    for(signed i=k; i<n; i++)
#define yn(b)   cout << ((b)?"Yes":"No") << endl
#define YN(b)   cout << ((b)?"YES":"No") << endl
#define pr(r)   cout << r << endl
#define min(x,y)    (x<y)?x:y
#define max(x,y)    (x>y)?x:y
#define ll  long long
int main(void){
    int a[5], i;
    rep(i, 5) cin >> a[i];
    int b[5];
    rep(i, 5) b[i] = a[i]%10;
    sort(b, b+5);
    int r = 0;
    rep(i, 5){
        if(a[i]%10 == 0) a[i]-=10;
        r += 10*(a[i]/10+1);
    }
    i=0;
    while(1){
        if(b[i] != 0) break;
        i++;
        if(i==5){
            i=0;
             break;
        }
    }
    r = r - 10 + b[i];
    pr(r);
}