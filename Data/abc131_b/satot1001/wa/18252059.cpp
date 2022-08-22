#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <functional>
#include <set>
#include <math.h>
#include <iomanip>
using namespace std;
const int MOD = 1000000007;
int main()
{
int n,l;
cin >> n >> l;
int lowwer = l;
int upper = l + n - 1;
if(lowwer * upper <= 0){
cout << (lowwer + upper) /2 * n;
}else if (upper < 0){
cout << (lowwer + (upper - 1)) * (n-1) / 2;
}else if (lowwer > 0){
cout << ((lowwer + 1) + upper) * (n-1) / 2;
}
return 0;
}
