#include <iostream>
using namespace std;
int main() {
unsigned long long a, b;
scanf("%llu %llu", &a, &b);
bool found = false;
unsigned long long sum = 0, i = -1;
unsigned long long mask = (1<<a)-1;
while(++i <= mask){
sum = 0;
for(int j = 0; j < a; j++){
unsigned long long bm = i&(1<<j);
sum += bm != 0 ? 4 : 2;
}
if(sum == b){
found = true;
i = mask+1;
}
}
printf("%s\n", found ? "Yes" : "No");
return 0;
}
