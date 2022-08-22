#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
std::cin>> a >> b ;
int c,d,e;
c=a+b;
d=a-b;
e=a*b;
int x[3]={c,d,e};
int ma=-99999999;
for(int i=0;i<3;i++){
if(ma<x[i]){ma=x[i];}
}
std::cout<< ma << std::endl;
return 0;
}
