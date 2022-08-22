#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int count = 0;
for(int i = 1; i <= N; i++){
if(0 < i && i < 10)
count++;
if(99 < i && i < 1000)
count++;
if(9999 < i && i < 100000)
count++;
}
cout << count << endl;
}
