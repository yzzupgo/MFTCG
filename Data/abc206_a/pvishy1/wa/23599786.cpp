#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int result = N * 1.08;
if(N < 206) {
cout << " Yay!";
} else if(N == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
