#include<bits/stdc++.h>
using namespace std;
int main(){
int N; cin>>N;
if(N <9)
cout << N << endl;
else if(N < 100)
cout << 9 << endl;
else if(N < 999)
cout << 9 + N - 100 + 1 << endl;
else if(N < 10000)
cout << 909 << endl;
else if(N < 99999)
cout << 909 + N - 10000 << endl;
else cout << 90909 << endl;
}
