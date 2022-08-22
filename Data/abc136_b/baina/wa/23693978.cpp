#include <iostream>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main()
{
int n, cnt = 0;
cin >> n;
rep(i, 1, n) {
if (i < 10) {
cnt++;
}
else if (i < 100) {
i = 99;
}
else if (i < 1000) {
cnt++;
}
else if (i < 10000) {
i = 9999;
}
else if (i < 100000) {
cnt++;
}
else {
i = n;
}
}
cout << cnt;
return 0;
}
