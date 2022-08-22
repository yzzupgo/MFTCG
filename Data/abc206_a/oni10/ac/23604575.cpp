#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
int sum = 0;
cin >> N;
sum = 1.08 * N;
if(sum < 206) {
cout << "Yay!";
} else if(sum == 206) {
cout << "so-so";
} else {
cout << ":(" ;
}
}
