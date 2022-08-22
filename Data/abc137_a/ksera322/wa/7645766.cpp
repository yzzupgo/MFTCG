#include <set>
#include <map>
#include <list>
#include <stack>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
int main(){
int A,B,ans=0;
cin >> A >> B;
if(ans > A + B)ans = A + B;
if(ans > A - B)ans = A - B;
if(ans > A * B)ans = A * B;
cout << ans << endl;
}
