#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
using ll = long long int;
int a, b;
int main(void) {
cin >> a >> b;
int ret;
if (a >= 13)
ret = b;
else if (a <= 5)
ret = 0;
else
ret = b / 2;
cout << ret << endl;
return 0;
}
