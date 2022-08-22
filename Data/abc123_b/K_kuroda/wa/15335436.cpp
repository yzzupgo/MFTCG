#include <bits/stdc++.h>
#define rep0(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef tuple<string, int, int> TU;
typedef tuple<int, int, int> TI;

int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    ll res=0;
    res+=(a+9)/10*10;
    res+=(b+9)/10*10;
    res+=(c+9)/10*10;
    res+=(d+9)/10*10;
    res+=(e+9)/10*10;
    int in[5]={a%10,b%10,c%10,d%10,e%10};
    sort(in,in+4);
    int mi = 0;
    rep0(i,5){
        if(in[i]!=0){
            mi=in[i];
            break;
        }
    }
    cout << res-10+mi << endl;
}
