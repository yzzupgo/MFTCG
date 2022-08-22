#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
std::cin>> a >> b ;
int c,d,e;
c=a+b;
d=a-b;
e=a*b;
if(c>=d&&c>=e){std::cout<< c << std::endl;}
if(d>=c&&d>=e){std::cout<< d << std::endl;}
if(e>=d&&e>=c){std::cout<< e << std::endl;}
return 0;
}
