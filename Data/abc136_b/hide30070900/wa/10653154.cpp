#include<bits/stdc++.h>
using namespace std;
int main(){
int N,count;
cin >> N;
count=0;
for (int i = 1; i < N; i++)
{
if(N>=1 && 9>=N){
count++;
}
else if(N>=100 && 999>=N){
count++;
}
else if(N>=10000 && 99999>=N){
count++;
}
}
cout << count << endl;
}
