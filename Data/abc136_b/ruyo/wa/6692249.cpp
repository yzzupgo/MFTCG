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
if (a >= 999) {
tt += 900;
if (a >= 99999) {
tt += 90000;
} else {
tt += tt += std::max(0, a - 9999);
}
} else {
tt += std::max(0, a - 99);
}
} else {
tt = a;
}
cout << tt << endl;
return 0;
}
