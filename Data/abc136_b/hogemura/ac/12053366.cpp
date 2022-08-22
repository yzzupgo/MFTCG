#include <iostream>
#include <string>
using namespace std;
int main() {
int N, count = 0;
cin >> N;
if(N >= 1) {
for(int i = 1; i <= N; i++) {
if(to_string(i).length() % 2 == 1)
count++;
}
}
cout << to_string(count);
return 0;
}
