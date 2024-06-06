import java.util.Scanner;

public class XOO {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Number of test cases

        for (int testCase = 0; testCase < t; testCase++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();

            int commonElement = checkCommonElement(x, y);
            System.out.println(commonElement);
        }
        scanner.close();
    }

    public static int checkCommonElement(int x, int y) {
        // Checking if n ^ x is equal to n ^ y for any non-negative integer n
        int n = x ^ y;

        if (n == 0) {
            return -1; // No common element found
        } else {
            return n;
        }
    }
}
