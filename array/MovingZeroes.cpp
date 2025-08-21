#include<bits/stdc++.h>
using namespace std;

void move_zero(int arr[] , int n) {
    int j = 0;
    for(int i = 0; i <= n; i++) {
        if(arr[i] != 0) {
            swap(arr[i] , arr[j]);
            j++;
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
     move_zero(arr,n);
    for(int i=0;i<=n-1;i++)
    {
        cout<< arr[i]<< " ";
    }

}