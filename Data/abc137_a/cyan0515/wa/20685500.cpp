#include <bits/stdc++.h>
int main(){
int a,b;
int max = 0;
if(a+b>max){ max = a+b; }
if(a-b>max){ max = a-b; }
if(a*b>max){ max = a*b; }
std::cout << max << std::endl;
}
