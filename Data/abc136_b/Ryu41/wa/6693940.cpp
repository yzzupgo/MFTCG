#include <iostream>
using namespace std;
int main() {
int N;
int count = 0;
cin >> N;
for (int i = 1; i <= N; i++) {
if ((i < 10) && (i<1000) && (i<100000)) {
count++;
}
}
cout << count << endl;
return 0;
}
