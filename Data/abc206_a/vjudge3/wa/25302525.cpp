#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
float x = N * 1.08;
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
