#include <iostream>
int main(){
int a, b;
int c, d, e,f;
std::cin >> a >> b;
c = a + b;
d = a - b;
e = a * b;
if((c>d)&&(c>e))
f = c;
else if((d>c)&&(d>e))
f = d;
else if((e>c)&&(e>d))
f = e;
std::cout << f << std::endl;
return 0;
}
