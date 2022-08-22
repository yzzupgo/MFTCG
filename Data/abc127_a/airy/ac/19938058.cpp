#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <queue>
#include <set>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <complex>
using ll = long long int;
using namespace std;
int main(){
long long int A, B;
std::cin >> A >> B;
if(A >=13){
std::cout << B << std::endl;
}
else if(A >=6){
std::cout << B/2 << std::endl;
}
else{
std::cout << 0 << std::endl;
}
return 0;
}
