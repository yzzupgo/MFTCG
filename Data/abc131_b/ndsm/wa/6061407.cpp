#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L,count=0;
cin >> N >> L;
vector<int> AP(N);
for(int i=0;i<N;i++){
int aa=L+i;
AP.at(i)=abs(aa);
count+=aa;
}
int min=42332,atai=0;
for(int i=0;i<N;i++){
if(abs(AP.at(i))<min){
min=AP.at(i);
atai=i;
}
}
cout << count-AP.at(atai) << endl;
}
