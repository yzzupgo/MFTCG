#include <cstdio>
int f1(int _n){
if(_n >= 100000){
return 90909;
}else if(_n >= 10000){
return (_n - 10000 +1) + 909;
}else if(_n >= 1000){
return 909;
}else if(_n >= 100){
return (_n - 100 +1) + 9;
}else if(_n >= 10){
return 9;
}else{
return _n;
}
}
int main (void)
{
int n;
scanf("%d", &n);
printf("%d\n", f1(n));
return 0;
}
