#include<bits/stdc++.h>
using namespace std;
int N, L;
pair<int, int> pees[200+9];
int main(){
scanf("%d %d", &N, &L);
for(int i=0;i<N;i++) pees[i].first = abs(L+(i+1)-1), pees[i].second=((L+(i+1)-1 < 0) ? -1 : 1);
sort(pees, pees+N);
long long ans=0;
for(int i=1;i<N;i++) ans += pees[i].first*pees[i].second;
printf("%lld\n", ans);
return 0;
}
