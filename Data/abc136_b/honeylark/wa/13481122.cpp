#include<iostream>
#include<string>
using namespace std;
int main() {
long long N;
cin >> N;
int count = 0;
for (int i = 1; i <= N; i++) {
if (to_string(N).length() % 2 == 1) {
count++;
}
}
cout << count << endl;
}
