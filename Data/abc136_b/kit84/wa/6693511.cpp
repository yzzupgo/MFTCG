#include <bits/stdc++.h>
using namespace std;
#define FALSE 0
#define TRUE 1
int main(){
int N;
int res;
cin >> N;
res = 0;
if (N < 100)
res = min(N, 9);
else if (N < 1000)
res = 9 + N - 99;
else if (N < 10000)
res = 909;
else if (N < 100000)
res = 909 + N - 999;
else
res = 90909;
cout << res << endl;
return 0;
}
