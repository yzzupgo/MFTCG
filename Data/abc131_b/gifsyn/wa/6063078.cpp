#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
int N, L;
scanf("%d %d", &N, &L);
int a = L + 1 - 1;
for(int i = 1; i <= N; i++){
a = min(a, abs(L + i - 1));
}
int sum = 0;
for(int i = 1; i <= N; i++){
sum += L + i - 1;
}
printf("%d\n", sum - a);
return 0;
}
