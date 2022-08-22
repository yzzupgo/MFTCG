#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
int n;
cin >> n;
int i = 1;
int ten = 10;
while (n >= ten) {
ten *= 10;
i++;
}
cout << i / 2 * 9 << "\n";
}
