#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <map>
#include <set>
using namespace std;
int main() {
int N;
cin >> N;
N = (double)N * 1.08;
if(N < 206) {
cout << "Yay!" << endl;
} else if(N == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
