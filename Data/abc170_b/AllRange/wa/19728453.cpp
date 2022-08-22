#include <bits/stdc++.h>
using namespace std;
int main(){
int N,M;
cin >> N >> M;
bool bo = false;
for(int i= 0;i <N;i++){
if((i*2)+((N-i)*4) == M)
bo = true;
}
if(bo) cout << "Yes" << endl;
else cout << "No" << endl;
}
