#include<bits/stdc++.h>
using namespace std;
int N, L, pees[200+9], neg[200+9];
int main(){
scanf("%d %d", &N, &L);
for(int i=0;i<N;i++) pees[i] = abs(L+(i+1)-1), neg[i]=((L+(i+1)-1 < 0) ? -1 : 1);
sort(pees, pees+N);
long long ans=0;
for(int i=1;i<N;i++) ans += pees[i]*neg[i];
printf("%lld\n", ans);
return 0;
}
