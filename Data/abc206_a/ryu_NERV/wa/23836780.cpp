#include<iostream>
using namespace std;
int main() {
int N = 0;
cin >> N;
if(N * 1.08 < 206) {
cout << "Yay!";
} else if(N * 1.08 == 206) {
cout << "so - so";
} else {
cout << ":(";
}
return 0;
}
