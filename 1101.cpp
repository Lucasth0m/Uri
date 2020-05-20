#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, n, maxn, minn, sum=0;
    cin >> m >> n;

    while (m>0 && n>0){
        
        maxn = max(m,n);
        minn = min(m,n);
        for (int i = minn; i <= maxn; i++)
        {
            cout << i << " ";
            sum+=i;
        }
        cout << "Sum=" << sum << endl;
        sum=0;
        cin >> m >> n;
    }
    
}