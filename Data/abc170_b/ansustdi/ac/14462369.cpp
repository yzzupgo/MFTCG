#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b;
scanf("%d %d", &a, &b);
for (int i = 0; i <= a; i++){
int j = a - i;
if (2 * i + 4 * j == b){
puts("Yes");
return 0;
}
}
puts("No");
return 0;
}
