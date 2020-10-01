#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;

    while(n!=0){
        int rsbm = n & -n;
        n -= rsbm;
        cnt++;
    }

    cout << cnt;

    return 0;
}

