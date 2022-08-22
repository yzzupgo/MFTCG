#include <bits/stdc++.h>
using namespace std;
int N, L;
int sum(int s, int e){
int t = 0;
for(int i = s; i <= e; i++) t += i;
return t;
}
int main(){
scanf("%d%d", &N, &L);
if(L > 0) printf("%d\n", sum(L + 1, L + N - 1));
else if(L <= 0 && L + N - 1 >= 0) printf("%d\n", sum(L, L + N - 1));
else printf("%d\n", sum(L, L + N - 2));
return 0;
}
