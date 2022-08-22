#include <bits/stdc++.h>
using namespace std;
int main(){
int a, s;
int npie = 0;
scanf("%d %d", &a, &s);
if(a+s > 0){
if(a > 0){
npie = -a;
}
}else{
npie = -a-s+1;
}
npie += (a * (a-1)) / 2;
npie += a * s;
printf("%d", npie);
}
