#include <bits/stdc++.h>
using namespace std;
#define arep(i,x,n) for (int i = int(x); i < (int)(n); i++)
#define rep(i,n) for (long long i = 0; i < n; ++i)
#define pi 3.141592653589793
#define eps 0.00000001
#define INF 1e9 + 7
int x;
int y;
int main() {
cin >> x >> y;
int low = 2 * x;
int high = 4 * x;
if(y >= low && y <= high){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
