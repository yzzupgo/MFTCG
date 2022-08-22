#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int count = 0;
for(int i = 0; i == N; i++){
if(i < 10){
count++;
}
if(i >= 10000 && i <= 99999){
count++;
}
}
cout << count <<endl;
}
