#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if(N * 1.08 >= 207) {
cout << ":(" << endl;
} else if(N * 1.08 >= 206 && N * 1.08 < 207) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
