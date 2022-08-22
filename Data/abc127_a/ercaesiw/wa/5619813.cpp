#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <queue>
#include <stack>
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
typedef long long ll;
using namespace std;
int inputValue(){
int a;
cin >> a;
return a;
};
void inputArray(int * p, int a){
rep(i, a){
cin >> p[i];
}
};
void inputVector(vector<int> * p, int a){
rep(i, a){
int input;
cin >> input;
p -> push_back(input);
}
}
template <typename T>
void output(T a, int precision=0) {
if(precision > 0){
cout << setprecision(precision) << a << "\n";
}
else{
cout << a << "\n";
}
}
int main(int argc, const char * argv[]) {
int a,b;
a=inputValue();
b=inputValue();
if (a>12)
{
output<int>(b);
}else if(a > 6 && a <=12)
{
output<int>(b/2);
}else
{
output<int>(0);
}
return 0;
}
