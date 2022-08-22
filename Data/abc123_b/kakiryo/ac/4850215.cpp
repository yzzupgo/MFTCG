#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
    vector<int> A(5);
    for (int i=0; i<5; i++) {
        cin >> A[i];
    }
    
    int min=10,index_last=0;
    for (int i=0; i<5; i++) {
        if (A[i]%10!=0) {
            if (A[i]%10<min) {
                min=A[i]%10;
                index_last=i;
            }
        }
    }
    
    int ans=0;
    for (int i=0; i<5; i++) {
        if (i!=index_last&&A[i]%10!=0) {
            A[i]=((A[i]+10)/10) * 10;
        }
        //cout << A[i] << endl;
        ans+=A[i];
    }
    cout << ans << endl;
}
