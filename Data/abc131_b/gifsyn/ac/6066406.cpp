#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
int N, L;
scanf("%d %d", &N, &L);
int a = abs(L + 1 - 1);
int min_i = 1;
for(int i = 1; i <= N; i++){
if(abs(L + i - 1) < a){
a = abs(L + i - 1);
min_i = i;
}
}
int sum = 0;
for(int i = 1; i <= N; i++){
sum += L + i - 1;
}
printf("%d\n", sum - (L + min_i - 1));
return 0;
}
