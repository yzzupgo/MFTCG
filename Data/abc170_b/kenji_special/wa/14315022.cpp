#include <bits/stdc++.h>
using namespace std;
#define arep(i,x,n) for (int i = int(x); i < (int)(n); i++)
#define rep(i,n) for (long long i = 0; i < n; ++i)
#define pi 3.141592653589793
#define eps 0.00000001
#define INF 1e9 + 7
float x;
float y;
int main() {
cin >> x >> y;
float div = y / x;
if(x < 1 || x > 50 || y < 1 || y > 100){
cout << "No" << endl;
return 0;
}
if (div >= 2.0f && div <= 4.0f) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
