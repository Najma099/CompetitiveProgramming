import java.util.*;

public class ManhCircCenter {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int r = sc.nextInt();
            int c = sc.nextInt();

            char[][] g = new char[r][c];
            for (int j = 0; j < r; j++) {
                String l = sc.next();
                g[j] = l.toCharArray();
            }

            int[] ctr = findCtr(g);
            System.out.println(ctr[0] + " " + ctr[1]);
        }

        sc.close();
    }

    private static int[] findCtr(char[][] g) {
        List<Integer> x = new ArrayList<>();
        List<Integer> y = new ArrayList<>();

        int r = g.length;
        int c = g[0].length;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (g[i][j] == '#') {
                    x.add(i + 1);
                    y.add(j + 1);
                }
            }
        }

        Collections.sort(x);
        Collections.sort(y);

        int mx = x.get(x.size() / 2);
        int my = y.get(y.size() / 2);

        return new int[]{mx, my};
    }
}
