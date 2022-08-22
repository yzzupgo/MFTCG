#include<iostream>
#include<string>
using namespace std;
int main() {
int N;
cin >> N;
int count = 0;
for (int i = 1; i <= N; i++) {
string s = to_string(i);
if (s.length() % 2 == 1) {
count++;
}
}
cout << count << endl;
}
