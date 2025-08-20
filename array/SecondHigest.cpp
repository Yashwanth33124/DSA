#include<bits/stdc++.h>
using namespace std;

int Max(int arr[] , int n) {
    int max = arr[0];
    int second_max = -1;
    for(int i = 0; i < n; i++) {
        if(max < arr[i]) 
            max=arr[i];
    }
        

        for(int i = 0; i < n; i++) {
            if(arr[i] >  second_max && arr[i] != max) {
                second_max = arr[i];
            }
        
    }

    return second_max;    
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << Max(arr,n);
}