// // // // // // // #include<bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // void print(int i,int n ) {
// // // // // // //     if(i == 0){return ;}
// // // // // // //     cout << i << endl;
// // // // // // //     print(i - 1,n);
// // // // // // // }

// // // // // // // int main() {
// // // // // // //     int n;
// // // // // // //     cin >> n ;
// // // // // // //     print(n,n);
// // // // // // // }


// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // void selection_sort(int arr[],int n) {
// // // // // //     for(int i = 0; i <= n- 2; i++) {
// // // // // //         int min = i;
// // // // // //         for(int j = i; j <= n - 1; j++) {
// // // // // //             if(arr[j] < arr[min]) min = j;
// // // // // //         }
// // // // // //         int temp;
// // // // // //         temp = arr[i];
// // // // // //         arr[i] = arr[min];
// // // // // //         arr[min]=temp;
// // // // // //     }
// // // // // // }

// // // // // // int main() {
// // // // // //     int n;
// // // // // //     cin >> n;
// // // // // //     int arr[n];
// // // // // //     for(int i = 0; i < n; i++)  cin >> arr[i];
// // // // // //     selection_sort(arr,n);
// // // // // //     for(int i = 0; i < n; i++) cout << arr[i] << " ";
        
    
// // // // // // }






// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;


// // // // // void print_array(int arr[], int n) {
// // // // //     for(int i = 0; i < n; i++) {
// // // // //         cout << arr[i] << " ";
// // // // //     }
// // // // //     cout << endl;
// // // // // }

// // // // // void selection_sort(int arr[] , int n) {
// // // // //     for(int i = 0; i <= n - 2; i++) {
// // // // //         int min = i;
// // // // //         for(int j = i; j <= n - 1; j++) {
// // // // //              if(arr[j] < arr[min]) min = j;
// // // // //         }
// // // // //            int temp;
// // // // //            temp = arr[i];
// // // // //            arr[i] = arr[min];
// // // // //            arr[min] = temp;




// // // // //            print_array(arr,n);

// // // // //     }
// // // // // }


// // // // // int main() {
// // // // //     int n;
// // // // //     cin >> n;
// // // // //     int arr[n];
// // // // //     for(int i = 0; i < n; i++) {
// // // // //         cin >> arr[i];
// // // // //     }
// // // // //     selection_sort(arr,n);

// // // // //     for(int i = 0; i < n; i++) {
// // // // //         cout << arr[i] << " ";
// // // // //     }
// // // // // }



// // // // #include<bits/stdc++.h>
// // // // using namespace std;

// // // // void insertion_sort(int arr[] , int n) {
// // // //     for(int i = 1; i <= n - 1; i++) {
// // // //         int j = i;
// // // //         while((arr[j - 1] > arr[j]) && j >= 1) {
// // // //             int temp;
// // // //             temp = arr[j];
// // // //             arr[j] = arr[j - 1];
// // // //             arr[j - 1] = temp;
// // // //             j--;

// // // //         }
// // // //     }
// // // // }


// // // // int main() {
// // // //     int n;
// // // //     cin >> n;
// // // //     int arr[n];
// // // //     for(int i = 0; i < n; i++) {
// // // //         cin >> arr[i];
// // // //     }
// // // //     insertion_sort(arr,n);

// // // //     for(int i = 0; i < n; i++) {
// // // //         cout << arr[i] << " ";
// // // //     }
// // // //  }




// // // // 






// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // void Selection_sort(int arr[] , int n) {
// // //     for(int i = 0; i <= n - 2; i++) {
// // //         int min = i;
// // //         for(int j =  i; j <= n - 1; j++) {
// // //             if(arr[j] < arr[min]) min = j;
// // //         }

// // //         int temp = arr[i];
// // //         arr[i] = arr[min];
// // //         arr[min] = temp;

// // //     }
// // // }


// // // int main() {
// // //     int n; 
// // //     cin >> n;
// // //     int arr[n];
// // //     for(int i = 0; i < n; i++) {
// // //         cin >> arr[i];
// // //     }
// // //     Selection_sort(arr,n);
// // //     for(int i = 0; i < n; i++) {
// // //         cout << arr[i] << " ";
// // //     }
// // // }



// // #include<bits/stdc++.h>
// // using namespace std;

// // void bubble_sort(int arr[] , int n) {
// //     for(int i = n - 1; i >= 1; i--) {
// //         for(int j = 0; j <= i - 1; j++) {
// //             if(arr[j] > arr[j + 1]) {
// //                 int temp;

// //                 temp = arr[j];
// //                 arr[j] = arr[j + 1];
// //                 arr[j + 1] = temp;
// //             }
// //         }
// //     }
// // }


// // int main() {
// //     int n; 
// //     cin >> n;
// //     int arr[n];
// //     for(int i = 0; i < n; i++) {
// //         cin >> arr[i];
// //     }
// //      bubble_sort(arr,n);
// //      for(int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //      }
// // }





// #include<bits/stdc++.h>
// using namespace std;



// void insertion_sort(int arr[] , int n) {
//     for(int i = 1; i <= n - 1; i++) {
//         int j = i;
//         while( arr[j - 1] > arr[j] && j >= 1) {
//             int temp;
//             temp = arr[j];
//             arr[j] = arr[j - 1];
//             arr[j - 1] = temp;
//             j--;
//         }
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     insertion_sort(arr,n);
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }





