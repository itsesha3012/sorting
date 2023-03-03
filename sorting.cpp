// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int>arr{5,4,3,2,1};
//     int n=arr.size();

//     for(int i=0;i<n-1;i++){
//          int  midindex=i;
//         for(int j=i+1;j<n;j++){
          
//             if(arr[j]<arr[midindex]){
//             midindex=j;

//             }
//             swap(arr[i],arr[midindex]);
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr{10,1,7,6,14,9};
//     int n=arr.size();
//     for(int i=0;i<n-1;i++){
//        int swapcount;
//        for(int j=0;j<n-i-1;j++){
//         if(arr[j]<arr[j+1]){
//             swap(arr[j],arr[j+1]);
//               swapcount++;

//         }
      
//        }

//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }



#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr{10,1,7,6,14,9};
  int n = arr.size();

  //insertion sort
//   for(int i = 1; i < n; i++)round k liye h i {
      //Step A - fetch
      int val = arr[i];
      //StepB: Compare
       int j=i-1;
      for(; j>=0; j--) {
          if(arr[j] > val) {
              // Step C: shift
              arr[j+1] = arr[j];
          }
          else {
              //rukna hai
              break;
          }

      }
      //stepD: Copy
      arr[j+1] = val;
  }

  //printinhg
  for(int i=0; i<n; i++) {
      cout << arr[i] << " ";
  }


