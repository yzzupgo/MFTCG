#include<bits/stdc++.h>
using namespace std;
int main(){
int N , L;
int total = 0;
cin >> N >> L;
for (int i = 1; i <N+1;i++){
total += L+i-1;
}
if (L>0){
total -= L;
}
else if(L+N-1 < 0){
total -= L+N-1;
}
cout << total << endl;
}
