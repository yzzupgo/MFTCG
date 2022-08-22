#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int c = 0;
for(int i = 0;i < N; i++){
if(i < 10 || (i >= 100 && i < 1000) || (i >= 10000 && i < 100000)) c++;
}
cout << c << endl;
return 0;
}
