#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main(){
int N = 100000;
cin >> N;
string N_s = to_string(N);
int count = 0;
for(int i=1; i<N; i++){
string N_s = to_string(N);
cout << N_s.size() << endl;
if(to_string(i).size()%2 == 1){
count ++;
}
else{
}
}
cout << count<<endl;
return 0;
}
