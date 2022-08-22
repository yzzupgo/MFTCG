#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
int N,L;
cin >> N >> L;
if(L >= 1){
cout << N * L - N + ((N + 1) * N)/2 - L << endl;
}
else if(L+N-1 <= 0){
cout << N * L - N + ((N + 1) * N)/2 - (L + N - 1) << endl;
}
else{
cout << N * L - N + ((N + 1) * N)/2 << endl;
}
}
