#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
vector<int> vec(N);
int count=0;
for(int i=0;i<N;i++){
count += L+i;
if(L+i>=0){
vec.at(i)=L+i;
}
else{
vec.at(i)=-(L+i);
}
}
sort(vec.begin(), vec.end());
if(L<0 && N <= -L){
cout << count + vec.at(0);
}
else{
cout << count - vec.at(0);
}
}
