#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
long double N;
cin >> N;
string s;
N = N * 1.08;
long long a = N;
if(206 == a) {
cout << "so - so" << endl;
} else if(206 < a) {
cout << ":(" << endl;
} else {
cout << "Yay!" << endl;
}
}
