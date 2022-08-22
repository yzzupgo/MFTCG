#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)
int main()
{
int N,d,sum=0;
cin >> N;
if (N<=9) {
cout << N;
} else if (N<=99) {
cout << 9;
} else if (N<=999) {
cout << N-99 + 9;
} else if (N<=9999) {
cout << 900+9;
} else if (N<=99999) {
cout << N-9999 + 900 + 9;
} else {
cout << 90000 + 900 + 9;
}
return 0;
}
