#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int cnt=0;
    int sum=700;
    vector<int> V(5);
    for(int i=0; i<5; i++){
        cin >> V[i];
    }
    for(int i=0; i<5; i++) {
                          int cnt = 0;    
        for(int j=0; j<5; j++) {

            if(i!=j) {
                if(V[j]%10!=0) cnt += V[j] -V[j]%10 +10;
                else cnt += V[j];
            }
            else cnt += V[j];
          cout << cnt << endl;
        }
        sum = min(sum, cnt);
    }
    cout << sum << endl;
}