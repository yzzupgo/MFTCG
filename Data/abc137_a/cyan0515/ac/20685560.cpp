#include <bits/stdc++.h>
int main(){
int a,b;
std::cin >> a >> b;
int max = -10000000000;
if(a+b>max){ max = a+b; }
if(a-b>max){ max = a-b; }
if(a*b>max){ max = a*b; }
std::cout << max << std::endl;
}
