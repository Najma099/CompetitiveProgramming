import java.util.Scanner;

public class Y {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); // Number of test cases
        
        for (int testCase = 0; testCase < t; testCase++) {
            int n = sc.nextInt(); // Number of ships
            long k = sc.nextLong(); // Number of times Kraken attacks
            long[] a = new long[n]; // Array to store durability of each ship
            
            // Input durability of each ship
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextLong();
            }
            
            long totalDurability = 0; // Total durability of all ships
            for (int i = 0; i < n; i++) {
                totalDurability += a[i]; // Calculate total durability
            }
            
            long sunkShips = 0; // Count of sunk ships
            long attacks = k; // Remaining attacks by Kraken
            
            // Find out how many times each ship will be attacked
            long minAttacks = Math.min(k, totalDurability);
            
            // Calculate the number of ships sunk using math
            // Each ship will be attacked minAttacks/n times
            sunkShips += (minAttacks / n) * n;
            attacks -= (minAttacks / n) * n;
            
            // Iterate over the remaining attacks
            for (int i = 0; i < n && attacks > 0; i++) {
                if (a[i] <= attacks) {
                    sunkShips++; // If ship can't withstand remaining attacks, it sinks
                    attacks -= a[i]; // Reduce attacks remaining
                } else {
                    break; // If ship's durability is more than remaining attacks, no more ships will sink
                }
            }
            
            System.out.println(sunkShips); // Print number of sunk ships for current test case
        }
        
        sc.close(); // Close scanner
    }
}
