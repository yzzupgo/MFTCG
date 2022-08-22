#include <bits/stdc++.h>
using namespace std;
int main() {
int N,Y;
cin >> N>>Y;
string str = "No";
for(int i =0;i<=N;i++){
if(Y == i*2+(N-i)*4) {
str = "Yes";
break;
}
}
cout << str <<endl;
}
