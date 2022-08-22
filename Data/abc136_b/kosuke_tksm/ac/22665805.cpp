#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <numeric>
#include <unordered_set>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <map>
using namespace std;
int main(){
int n; cin >> n;
if(n<100) cout << min(n,9) << endl;
if(n>=100&n<10000){
cout << min(n,999) - 100 + 10 << endl;
}
if(n>=10000){
cout << min(n,99999) - 9999 + 909 << endl;
}
}
