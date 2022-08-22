#include<bits/stdc++.h>
using namespace std;
int main(){
int N , L;
int total = 0;
cin >> N >> L;
for (int i = 2;i < N+1;i++){
total += L + i-1;
}
cout << total << endl;
}
