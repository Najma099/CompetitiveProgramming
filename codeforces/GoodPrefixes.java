// import java.util.*;

// public class GoodPrefixes {

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         int t = sc.nextInt(); // Number of test cases
//         while (t-- > 0) {
//             int n = sc.nextInt(); // Length of the array
//             int[] arr = new int[n]; // Array elements
//             for (int i = 0; i < n; i++) {
//                 arr[i] = sc.nextInt();
//             }
//             System.out.println(countGoodPrefixes(n, arr));
//         }

//         sc.close();
//     }

//     private static int countGoodPrefixes(int n, int[] arr) {
//         Set<Long> prefixSums = new HashSet<>();
//         long prefixSum = 0;
//         int goodPrefixes = 0;
//         int zeroCount = 0;

//         for (int i = 0; i < n; i++) {
//             prefixSum += arr[i];
//             if (prefixSum == 0 || prefixSums.contains(prefixSum) || arr[i] == 0) {
//                 goodPrefixes++;
//             }
//             prefixSums.add(prefixSum);
//         }

//         return goodPrefixes;
//     }
// }
