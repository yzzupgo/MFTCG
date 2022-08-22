#include <bits/stdc++.h>
using namespace std;

int mytime(int a){
    if(a % 10 == 0){
        return a;
    }
    else{
        return (a + 10 - a%10);
    }
}
 
int main() {
    vector<int> vec(5);
    int maxtime = 0;
    for (int i=0; i<5; i++){
        cin >> vec.at(i);
        maxtime += mytime(vec.at(i));
    }

    int minamari=0;
    for(int i=1; i<=9; i++){
        for(int j=0; j<5; j++){
            if(vec.at(j) % 10 == i){
                minamari = vec.at(j) % 10;
                break;
            }
        }
        if(minamari != 0){
            break;
        }
    }
    
    cout << maxtime -10 + minamari << endl;

}