#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
int a;
cin >> a;
if(a * 1.08 < 206) {
cout << "Yay!";
} else if(a * 1.08 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
