#include<bits/stdc++.h>
using namespace std;
int main(){
int N,count;
cin >> N;
count=0;
for (int i = 1; i <= N; i++)
{
if(i>=1 && 9>=i){
count++;
}
else if(i>=100 && 999>=i){
count++;
}
else if(i>=10000 && 99999>=i){
count++;
}
}
cout << count << endl;
}
