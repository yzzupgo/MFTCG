#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int count = 0;
for(int i = 1; i < N; i++){
int c = 0;
int j = i;
while(j>0){
j/=10;
c+=1;
}
if(c % 2 != 0){
count += 1;
}
}
cout << count << endl;
}
