#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int number=0;
for (int i = 1;i < N+1; i++){
int count = 0;
int a = i;
while(a != 0){
a /= 10;
count ++;
}
if (count % 2 == 1){
number++;
}
}
cout << number << endl;
}
