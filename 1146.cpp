#include <bits/stdc++.h>

using namespace std;

int main(){

int n;

cin >> n;
while (n!=0){
    cout << 1;
    for (int i =2; i <= n; i++){
        cout << " " << i;
    }
    cout << endl;
    cin >> n;
}



    return 0;
}