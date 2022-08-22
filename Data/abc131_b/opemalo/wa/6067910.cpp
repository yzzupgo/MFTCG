#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int i,j;
int sum = 0;
int least,sa,sa1,check;
int num;
for(i = 1;i <= N;i++){
sum += (i + L - 1);
}
cout << sum << endl;
for(i = 1;i <= N;i++){
check = 0;
for(j = 1;j <= N;j++){
if(j == i){
continue;
}
check += (j + L - 1);
}
sa = check - sum;
if(sa < 0){
sa *= -1;
}
cout << "check:" << check << endl;
cout << "least:" << least << endl;
if(sa < sa1 || i == 1){
least = check;
sa1 = sa;
}
}
cout << least << endl;
}
