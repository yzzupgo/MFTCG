#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
using namespace std;
#define ll long long
int main(){
int A, B, max = -200;
cin >> A >> B;
if(A+B>max)max = A+B;
if(A-B>max)max = A-B;
if(A*B>max)max = A*B;
cout << max << endl;
return 0;
}
