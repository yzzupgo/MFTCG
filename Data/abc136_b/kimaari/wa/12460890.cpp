#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int count =0;
for(int i=1; i<N; i++){
ostringstream oss;
oss << i;
if(oss.str().size() %2==1){
count++;
}
}
cout << count << endl;
}
