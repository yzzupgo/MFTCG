#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
int n, l;
std::cin >> n >> l;
int first = l, last = l + n - 1;
int sum;
if(n % 2){
sum = (first + last) * (n / 2) + (first + last) / 2;
}else{
sum = (first + last) * n/2;
}
if(first < 0 and last < 0){
std::cout << sum - last << std::endl;
}else if(first < 0 and last > 0){
std::cout << sum << std::endl;
}else{
std::cout << sum - first << std::endl;
}
return 0;
}
