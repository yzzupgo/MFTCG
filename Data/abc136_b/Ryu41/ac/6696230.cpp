#include <iostream>
using namespace std;
int main() {
int N;
int count = 0;
cin >> N;
for (int i = 1; i <= N; i++) {
if ((i >= 0) && (i < 10)) {
count++;
}
else if ((i >= 100)&&(i < 1000)) {
count++;
} else if ((i >=10000)&&(i < 100000)) {
count++;
}
}
cout << count << endl;
return 0;
}
