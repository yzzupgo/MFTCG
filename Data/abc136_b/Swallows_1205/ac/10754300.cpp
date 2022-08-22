#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int count = 0;
for(int i = 0; i < N; i++){
if(i + 1 >= 1 && i + 1 <= 9) count++;
else if(i + 1 >= 100 && i + 1 <= 999) count++;
else if(i + 1 >= 10000 && i + 1 <= 99999) count++;
}
cout << count << endl;
return 0;
}
