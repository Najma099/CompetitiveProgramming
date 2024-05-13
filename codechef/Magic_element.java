import java.util.*;

class Codechef {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int t = 0; t < T; t++) {
            int N = sc.nextInt();
            int K = sc.nextInt();
            int[] A = new int[N];
            long sum = 0;
            for (int i = 0; i < N; i++) {
                A[i] = sc.nextInt();
                sum += A[i];
            }
            int validPositions = 0;
            for (int i = 0; i < N; i++) {
                if (A[i] + K > (sum - A[i])) {
                    validPositions++;
                }
            }
            System.out.println(validPositions);
        }
        sc.close();
    }
}
