import java.util.Scanner;

public class StabilizeMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();
        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int[][] arr = new int[n][m];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    arr[i][j] = sc.nextInt();
                }
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (i == 0) {
                        if (j == 0) {
                            if ((arr[i][j] > arr[i][j + 1]) && (arr[i][j] > arr[i + 1][j])) {
                                arr[i][j] = Math.max(arr[i][j + 1], arr[i + 1][j]);
                            }
                        } else if (j > 0 && j < m - 1) {
                            if ((arr[i][j] > arr[i][j + 1]) && (arr[i][j] > arr[i + 1][j]) && (arr[i][j] > arr[i][j - 1])) {
                                arr[i][j] = Math.max(arr[i][j + 1], Math.max(arr[i + 1][j], arr[i][j - 1]));
                            }
                        } else if (j == m - 1) {
                            if ((arr[i][j] > arr[i][j - 1]) && (arr[i][j] > arr[i + 1][j])) {
                                arr[i][j] = Math.max(arr[i][j - 1], arr[i + 1][j]);
                            }
                        }
                    } else if (i > 0 && i < n - 1) {
                        if (j == 0) {
                            if ((arr[i][j] > arr[i - 1][j]) && (arr[i][j] > arr[i + 1][j]) && (arr[i][j] > arr[i][j + 1])) {
                                arr[i][j] = Math.max(arr[i - 1][j], Math.max(arr[i + 1][j], arr[i][j + 1]));
                            }
                        } else if (j > 0 && j < m - 1) {
                            if ((arr[i][j] > arr[i - 1][j]) && (arr[i][j] > arr[i + 1][j]) && (arr[i][j] > arr[i][j + 1]) && (arr[i][j] > arr[i][j - 1])) {
                                arr[i][j] = Math.max(arr[i - 1][j], Math.max(arr[i + 1][j], Math.max(arr[i][j + 1], arr[i][j - 1])));
                            }
                        } else if (j == m - 1) {
                            if ((arr[i][j] > arr[i - 1][j]) && (arr[i][j] > arr[i + 1][j]) && (arr[i][j] > arr[i][j - 1])) {
                                arr[i][j] = Math.max(arr[i - 1][j], Math.max(arr[i + 1][j], arr[i][j - 1]));
                            }
                        }
                    } else if (i == n - 1) {
                        if (j == 0) {
                            if ((arr[i][j] > arr[i][j + 1]) && (arr[i][j] > arr[i - 1][j])) {
                                arr[i][j] = Math.max(arr[i][j + 1], arr[i - 1][j]);
                            }
                        } else if (j > 0 && j < m - 1) {
                            if ((arr[i][j] > arr[i][j + 1]) && (arr[i][j] > arr[i - 1][j]) && (arr[i][j] > arr[i][j - 1])) {
                                arr[i][j] = Math.max(arr[i][j + 1], Math.max(arr[i - 1][j], arr[i][j - 1]));
                            }
                        } else if (j == m - 1) {
                            if ((arr[i][j] > arr[i][j - 1]) && (arr[i][j] > arr[i - 1][j])) {
                                arr[i][j] = Math.max(arr[i][j - 1], arr[i - 1][j]);
                            }
                        }
                    }
                }
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    System.out.print(arr[i][j] + " ");
                }
                System.out.println();
            }
        }
        sc.close();
    }
}
