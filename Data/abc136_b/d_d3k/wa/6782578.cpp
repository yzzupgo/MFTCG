#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N ;
if(1 <= N <10){
cout << N << endl;
}
else if (10 <= N < 100){
cout << 9 << endl;
}
else if (100 <= N < 1000){
cout << 9 + N - 99<<endl;
}
else if (1000 <=N < 10000){
cout << 909 << endl;
}
else{
cout << 909 + N - 9999<<endl;
}
}
