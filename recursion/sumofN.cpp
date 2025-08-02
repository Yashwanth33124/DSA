#include<bits/stdc++.h>
using namespace std;
void f(int i,int sum) {
    if(i == 0) {
        cout << sum << endl;
        return;
    }
    f(i - 1,sum + i);
}
int main() {
    int n;
    cin >> n;
    f(n,0);

    return 0;
}

