#include <bits/stdc++.h>
using namespace std;
int main(void){
int n, count = 0, r = 0, flag = 0;
cin >> n;
for (int i = 0 ; i< 6; i++){
if ( int(n / pow(10, i)) == 0){
r = i-1;
break;
}
else if (n / pow(10, i) == 1){
r = i; flag = 1;
break;
}
}
for (int i = 0; i < r + 1; i += 2){
if (i != r){
count += (pow(10, i+1) - pow(10, i));
}
else{
count += (n - pow(10, i) + 1);
}
}
cout << count << endl;
}
