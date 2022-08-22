#include <bits/stdc++.h>
using namespace std;

#define cc(x) cout << (x) << endl
#define rep(i,n) for(int i = 0; i < int(n); i++)
#define repi(i,a,b) for(int i = int(a); i < int(b); ++i)
typedef long long ll;

template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }

const ll inf = 1LL<<58;
const int iinf = 1<<30;

int main(){
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e;
    int tmp = iinf;
    if(a%10!=0){
        amin(tmp, a%10);
        a+=10-a%10;
        
    }
    if(b%10!=0){
        amin(tmp, b%10);
        b+=10-b%10;
        
    }
    if(c%10!=0){
        amin(tmp, c%10);
        c+=10-c%10;
        
    }
    if(d%10!=0){
        amin(tmp, d%10);
        d+=10-d%10;
        
    }
    if(e%10!=0){
        amin(tmp, e%10);
        e+=10-e%10;
        
    }
    cc(a+b+c+d+e-10+tmp);
}