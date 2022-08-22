#include <bits/stdc++.h>
using namespace std;
int main(void){
int N,L,min = 1000,c=0;
cin >> N >> L;
for(int i=1;i<=N;i++){
if(min > abs(L + i -1)) min = abs(L + i -1);
c += (L + i - 1);
}
if(c >= 0){
cout << c - min <<endl;
}
else{
cout << c + min << endl;
}
}
