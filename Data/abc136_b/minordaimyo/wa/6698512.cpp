#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <functional>
#include <climits>
#include <cmath>
#include <utility>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[])
{
int n;
cin >> n;
int ans = 0;
if (n < 10){
ans = n;
}
else if (n < 100){
ans = 9;
}
else if (n < 1000){
ans = 9;
ans += (n - 99);
}
else if (n < 10000){
ans = 9;
ans += (n % 1000 - 99);
}
else if (n < 100000){
ans = 909;
ans += (n - 9999);
}
else{
ans = 90909;
}
cout << ans << endl;
return 0;
}
