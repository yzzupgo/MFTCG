#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
int main(void){
    // Your code here!
    int c[5];
    int d[5];
    int mind=0;
    int total = 0;
    int ts;
    bool check = true;
    for(int i =0 ; i < 5; i++){
        cin >> c[i];
        d[i] = c[i]%10;
        total += ((c[i]-1)/10 + 1)*10;
        //cout << ((c[i]-1)/10 + 1)*10 << endl;
        mind = *std::min_element(d,d+5);
    }
    cout << total + mind - 10 << endl;
    // for(int i = 0; i < 5; i ++ ){
    //     for(int j = 0; j < 5; j++){
    //         if(abs(c[i]-c[j]) > c[5]){
    //             check= false;
    //         }
    //     }
    // }
    // if(check){
    //     cout << "Yay!" << endl;
    // }else{
    //     cout<<":("<< endl;
    // }
}
