import java.util.Scanner;

public class CatchTheCoin {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        int[][] coins = new int[n][2];
        for (int i = 0; i < n; i++) {
            coins[i][0] = scanner.nextInt();
            coins[i][1] = scanner.nextInt();
            scanner.nextLine(); // Consume newline
        }

        for (int i = 0; i < n; i++) {
            int x = coins[i][0];
            int y = coins[i][1];

            if (canCollectCoin(x, y)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        scanner.close();
    }

    private static boolean canCollectCoin(int x, int y) {
        int[][] directions = {
            {0, 1},    // up
            {1, 1},    // up-right
            {1, 0},    // right
            {1, -1},   // down-right
            {0, -1},   // down
            {-1, -1},  // down-left
            {-1, 0},   // left
            {-1, 1}    // up-left
        };

        for (int[] dir : directions) {
            int currX = 0;
            int currY = 0;

            while (true) {
                if (currX == x && currY == y) {
                    return true;
                }

                currY--;  // simulate coin falling down
                if (currY < y) {
                    break;
                }

                currX += dir[0];
            }
        }

        return false;
    }
}
