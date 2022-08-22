#include<iostream>
#include <vector>
#include <algorithm>
#include<iomanip>
#include<math.h>
#include<string>
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
using namespace std;
struct Room {
int *a;
int shortest;
int way;
int ways;
};
int main() {
static long long X, Y;
cin >> X >> Y;
if (Y % 2 == 1) {
cout << "No" << endl;
return 0;
}
if ((3 * X) - (Y / 2) < 0) {
cout << "No" << endl;
return 0;
}
if ((Y / 2) - X < 0) {
cout << "No" << endl;
return 0;
}cout << "Yes" << endl;
return 0;
}
