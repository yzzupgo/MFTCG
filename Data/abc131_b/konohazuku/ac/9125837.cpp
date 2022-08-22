#include <bits/stdc++.h>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
vector<int> v(N);
int count = 0;
int sum = 0;
for(int i=0; i<N; i++){
v.at(i)=L+i;
sum += v.at(i);
if(v.at(i)==0){
count++;
}
}
int h_min = 300;
int m_min;
if(count!=1){
for(int i=0; i<N; i++){
m_min=min(abs(v.at(i)),h_min);
h_min = m_min;
if(i == N-1){
if(sum>0){
cout << sum - h_min << endl;
}
else if(sum<0){
cout << sum + h_min << endl;
}
}
}
}
else {
cout << sum << endl;
}
return 0;
}
