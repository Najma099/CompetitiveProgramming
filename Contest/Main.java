import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Number of test cases

        while (t-- > 0) {
            int n = scanner.nextInt(); // Number of elements in the array
            int[] a = new int[n]; // Array a

            // Read the elements of the array
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
            }

            boolean possible = false;
            for (int i = 1; i < n - 1; i++) {
                int gcd1 = gcd(a[i - 1], a[i + 1]); // GCD after removing a[i]
                int gcd2 = gcd(a[i], a[i + 1]); // GCD after removing a[i - 1]

                // Check if removing a[i] results in a non-decreasing GCD sequence
                if (gcd1 >= a[i] || gcd2 >= a[i + 1]) {
                    possible = true;
                    break;
                }
            }

            // Output the result for the current test case
            System.out.println(possible ? "YES" : "NO");
        }
        scanner.close();
    }

    // Function to find the GCD of two numbers using Euclidean algorithm
    public static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}
