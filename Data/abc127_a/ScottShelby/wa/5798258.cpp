#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<numeric>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
int main(){
int a, b;
cin >> a >> b;
if(a >= 13) cout << a << endl;
else if(a <= 5) cout << 0 << endl;
else cout << a/2 << endl;
}
