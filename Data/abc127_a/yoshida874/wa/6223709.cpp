#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
int n, a;
cin >> n >> a;
if(n>=13){
cout << n << endl;
}
else if (n>=6) {
a = a / 2;
cout << n << endl;
}
else cout << 0 << endl;
}
