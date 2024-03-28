package codeforces;


import java.util.Scanner;

public class Clock_Conversion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine(); // consume newline after T
        for (int i = 0; i < T; i++) {
            String s = sc.nextLine();
            int hour = Integer.parseInt(s.substring(0, 2));
            int minute = Integer.parseInt(s.substring(3, 5));
            int second = Integer.parseInt(s.substring(6, 8));
            String period = "AM";

            if (hour >= 12) {
                period = "PM";
                hour -= 12;
            }
            if (hour == 0) {
                hour = 12;
            }

            System.out.printf("%02d:%02d:%02d%s\n", hour, minute, second, period);
        }
        sc.close();
    }
}
