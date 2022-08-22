#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
using namespace std;
#include <stdio.h>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include<iostream>
using namespace std;
int main()
{
int a;
cin >> a;
int aa[] = {
1, 10, 100, 1000, 10000, 100000,
};
int tt = 0;
if (a >= 9) {
tt += 9;
} else {
tt = a;
}
if (a >= 999) {
tt += 899;
} else {
tt += a - 99;
}
if (a >= 99999) {
tt += 89999;
} else {
tt += a - 9999;
}
cout << tt << endl;
return 0;
}
