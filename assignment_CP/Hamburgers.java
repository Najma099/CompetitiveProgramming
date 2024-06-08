import java.util.Scanner;

public class Hamburgers {

    public static boolean check(int[] material, int[] noOf, int[] price, long cost, long mid) {
        long totalCost = 0;
        for (int i = 0; i < 3; i++) {
            long required = material[i] * mid;
            if (required > noOf[i]) {
                long toBuy = required - noOf[i];
                totalCost += toBuy * price[i];
            }
        }
        return totalCost <= cost;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        int[] noOf = new int[3];
        int[] price = new int[3];

        for (int i = 0; i < 3; i++) {
            noOf[i] = sc.nextInt();
        }
        for (int i = 0; i < 3; i++) {
            price[i] = sc.nextInt();
        }

        long cost = sc.nextLong();

        int[] material = new int[3];
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'B')
                material[0]++;
            else if (s.charAt(i) == 'S')
                material[1]++;
            else if (s.charAt(i) == 'C')
                material[2]++;
        }

        long low = 0;
        long high = (long) 1e13;
        long ans = 0;

        while (low <= high) {
            long mid = (low + high) / 2;
            if (check(material, noOf, price, cost, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        System.out.println(ans);
        sc.close();
    }
}
