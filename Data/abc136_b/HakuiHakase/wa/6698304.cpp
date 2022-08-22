#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
int a=0;
cin >> N;
for(int i = 1; i < N; i++) {
if (i < 10)
a++;
else if (i >= 100 && i < 1000)
a++;
else if (i >= 10000 && i < 100000)
a++;
}
cout << a << endl;
return 0;
}
