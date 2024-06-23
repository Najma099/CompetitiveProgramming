import java.util.Scanner;

public class EarningOnBet {
    public static int findHCF(int numbers[]) {
        int hcf = numbers[0];
        for (int i = 1; i < numbers.length; i++) {
            hcf = findHC(hcf, numbers[i]);
        }
        return hcf;
    }

    public static int findHC(int a, int b) {
        int temp = 0;
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        return temp;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            int HCF = findHCF(arr);
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += HCF / arr[i];
            }

            if (sum < HCF) {
                System.out.println(-1);
            } else {
                for (int i = 0; i < n; i++) {
                    System.out.print((HCF / arr[i]) + " ");
                }
                System.out.println();
            }
        }
        sc.close();
    }
}
