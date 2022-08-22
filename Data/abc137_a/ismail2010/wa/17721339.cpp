#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <string>
#include <set>
typedef long long ll;
using namespace std;
int main() {
int a,b;
cin >> a >> b;
if(a+b > a-b and a+b > a*b){
cout << a+b << endl;
}
else if(a-b > a+b and a-b > a*b){
cout << a-b << endl;
}
else if(a*b > a+b and a*b > a-b){
cout << a*b << endl;
}
return 0;
}
