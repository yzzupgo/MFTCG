#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int result = 1.08 * N;
if(result < 206) {
cout << "Yay!";
} else if(result == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
