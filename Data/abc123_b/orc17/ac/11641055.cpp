#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<deque>
#include<math.h>
#include<functional>
#include<cassert>
using namespace std;
#define ll long long
int main(){
    ll a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    ll f=min({(a+9)%10,(b+9)%10,(c+9)%10,(d+9)%10,(e+9)%10})+1;
    cout << (a-1)/10*10+(b-1)/10*10+(c-1)/10*10+(d-1)/10*10+(e-1)/10*10+40+f <<endl;
    return 0;
}