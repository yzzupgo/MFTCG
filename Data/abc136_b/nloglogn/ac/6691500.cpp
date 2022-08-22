#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if(N < 10){
cout << N << endl;
}else if (N < 100){
cout << 9 << endl;
}else if (N < 1000){
cout << (N - 100 + 1) + 9;
}else if (N < 10000){
cout << 9 + (999 - 100 + 1);
}else if (N < 100000){
cout << (N - 10000 + 1 ) + 9 + (999 - 100 + 1);
}else{
cout << 90909;;
}
}
