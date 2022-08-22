#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<queue>
#include<utility>
using namespace std;
int main() {
long long int n;
cin >> n;
long long int count = 0;
while (n > 0) {
if (n >= 1 && n <= 9 || n >= 100 && n <= 999 || n >= 10000 && n <= 99999) {
count++;
}
n--;
}
cout << count << endl;
}
