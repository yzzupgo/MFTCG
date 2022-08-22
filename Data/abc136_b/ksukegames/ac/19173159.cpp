#include <bits/stdc++.h>
using namespace std;
int main(){
long long int N;
int count = 0;
cin >> N;
for(int i = 1; i <= N; i++){
if(0 < i && i < 10){
count++;
}
if(100 <= i && i <= 999){
count++;
}
if(10000 <= i && i <= 99999){
count++;
}
}
cout << count << endl;
}
