#include<bits/stdc++.h>
using namespace std;
int main() {
int N ;
cin >> N;
int B = floor(1.08 * N);
if(B < 206) {
cout << "Yay!";
} else if(B == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
