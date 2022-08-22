#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <iomanip>
#define M_PIl 3.141592653589793238462643383279502884
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
ll a,b;
cin >> a >> b;
ld t = b;
if((b==2)&&(a==1)){
cout << "Yes";
return 0;
}
if(b%2==0){
if((a<=b/2)&&(a>=ceil(t/4))){
cout << "Yes";
}
else{
cout << "No";
}
}
else{
cout << "No";
}
}
