#include <stdio.h>
#include <string>
#include <stdlib.h>
#include<vector>
#include<iostream>
#include<set>
using namespace std;
int main() {
int a,b;
cin >> a >> b;
if(a >= 13) cout << b << endl;
else if(a>=6) cout << b/2 << endl;
else cout << 0 <<endl;
return 0;
}
