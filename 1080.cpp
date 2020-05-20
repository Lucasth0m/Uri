#include <bits/stdc++.h>

using namespace std;

int main(){

    int n=0, highest=0, i, pos=0;

    for (i = 0; i < 100; i++){
        cin >> n;

        if (n>highest){
            highest= n;
            pos= i+1;
        }
    }
    
    cout << highest << endl << pos << endl;

    return 0;
}