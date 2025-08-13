#include<bits/stdc++.h>
using namespace std;

int max_element(int arr[] , int n) {
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
     cout << max_element(arr,n);

}

