#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int keta = 0;
int count = 0;
for(int i = 0; i < N; i++){
int a = i + 1;
keta = 0;
while(a != 0){
a /= 10;
keta++;
}
if(keta % 2 == 1) count++;
}
cout << count << endl;
return 0;
}
