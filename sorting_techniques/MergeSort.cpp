#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left , int mid,int right) {

    int i = left;
    int j = mid + 1;
    int k = 0;
    int n = right - left + 1;
    int new_arr[n];

    while(i <= mid and j <= right) {
        if(arr[i] < arr[j]) {
            new_arr[k] = arr[i];
            i++;
            k++;

        } else {
            new_arr[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i <= mid) {
        new_arr[k] = arr[i];
        i++;
        k++;
    }
    while(j <= right) {
        new_arr[k] = arr[j];
        j++;
        k++;
    }
    for(int c = 0; c <= n - 1; c++) {
        arr[left + c] = new_arr[c];
    }



}
void merge_sort(int arr[],int left,int right) {
    if(left == right) {
        return ;
    }

    int mid = (left + right) / 2;
    merge_sort(arr,left,mid);
    merge_sort(arr,mid + 1,right);
    merge(arr,left,mid,right);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}