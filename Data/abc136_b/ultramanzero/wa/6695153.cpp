#include <cstdio>
using namespace std;
int N,dig,tmp,p[6],ans;
int main() {
for (scanf("%d",&N),tmp = N;tmp;tmp/=10) dig++;
p[0] = 1; for (int i = 1;i <= 5;i++) p[i] = p[i-1]*10;
for (int i = 0;i < dig-1;i+=2) ans*=100,ans+=9;
if (dig&1) {tmp = N; for (int i = 0;i < dig-1;i++,tmp/=10) ans+=tmp%10*p[i]; ans++;}
printf("%d\n",ans);
}
