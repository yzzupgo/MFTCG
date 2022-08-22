#include<iostream>
#include<cstdio>
#define fo(i,a,b) for (register int i = a;i <= b;i ++)
#define fd(i,a,b) for (register int i = a;i >= b;i --)
#define wr(a,b) printf("%s = %d\n",a,b)
#define mem(a,b) memset(a,(b),sizeof(a))
using namespace std;
const int N = 100010;
int n;
int main(){
ios::sync_with_stdio(false); cin.tie(0);
cin >> n;
if (n <= 9) {
cout << n << endl;
return 0;
}
int a = 10, ans = 0, k = 0, b;
fo (i,2,6){
if (n / a <= 1) {
k = i;
if (k & 1) ans += (n - a + 1);
break;
}
a *= 10;
}
a = 0, b = 9;
fo (i,1,k - 1){
if (i & 1) ans += b - a;
b = b * 10 + 9;
a = a * 10 + 9;
}
cout << ans << endl;
return 0;
}
