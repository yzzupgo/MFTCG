#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if(N * 108 > 20600) {
cout << ":(" << endl;
} else if(N * 108 == 20600) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
