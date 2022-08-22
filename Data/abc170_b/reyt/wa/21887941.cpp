#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#include <utility>
#include <set>
#include <map>
#include <cmath>
#include <functional>
#include <list>
#include <queue>
#include <bitset>
using ll = long long;
const double pi=3.14159265358979323846;
int main(){
int x,y;
std::cin >> x >> y;
if (y <= x*4 && (y - x*2)%2==0){
std::cout << "Yes" << std::endl;
}
else{
std::cout << "No" << std::endl;
}
}
