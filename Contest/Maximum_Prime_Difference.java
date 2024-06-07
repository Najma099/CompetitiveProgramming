// class Solution {
//     public boolean isprime(int x) {
//         if (x <= 1) 
//             return false;
//         for (int i = 2; i * i <= x; i++) {
//             if (x % i == 0) {
//                 return false;
//             }
//         }
//         return true;
//     }

//     public int maximumPrimeDifference(int[] arr) {
//         int min_index=0;
//         for(int i=0;i<arr.length;i++)
//         {
//             if(isprime(arr[i]))
//             {
//                min_index=i;
//                 break;
//             }
//         }
//         int max_index=0;
//         for(int j=arr.length-1;j>=min_index;j--)
//         {
//             if(isprime(arr[j]))
//             {
//                 max_index=j;
//                 break;
//             }
//         }
//         return max_index-min_index;
//     }
// }