#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
double i = 1.08 * N;
if(i < 206) {
cout << " Yay!";
} else if(i == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
