#include<bits/stdc++.h>
using namespace std;
#define rep(i,s,n) for(int i = s; i < n; i++)
int main() {
int N;
cin >> N;
int fp = floor(1.08 * (double)N);
if(fp < 206) {
cout << "Yay!" << endl;
} else if(fp == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
