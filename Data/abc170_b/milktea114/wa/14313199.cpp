#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>
#include <map>
#include <math.h>
#include <numeric>
#include <iomanip>
#include <climits>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
int tmp=(2*x-y);
if((y%2==0)&&(tmp>=0)&&(tmp%2==0)&&(tmp/2<=x))cout << "Yes" << endl;
else cout << "No" << endl;
}
