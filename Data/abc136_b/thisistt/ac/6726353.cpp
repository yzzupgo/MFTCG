#include <cstdio>
int f1(int _n){
if(_n >= 100000){
return f1(99999);
}else if(_n >= 10000){
return (_n - 10000 +1) + f1(999);
}else if(_n >= 1000){
return f1(999);
}else if(_n >= 100){
return (_n - 100 +1) + f1(9);
}else if(_n >= 10){
return f1(9);
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
