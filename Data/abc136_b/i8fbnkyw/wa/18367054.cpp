#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<iomanip>
using namespace std;
int main(void){
int n;
cin >> n;
int ans = 0;
if(n == 100000) ans = (9 + 900 + 90000);
else if(n >= 10000) ans = (9 + 900 + (n-10000));
else if(n >= 1000) ans = (9 + 900);
else if(n >= 100) ans = (9 + (n-100));
else if(n >= 10) ans = 9;
else ans = n;
cout << ans << endl;
}
