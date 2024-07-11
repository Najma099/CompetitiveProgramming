import java.util.Arrays;
import java.util.Scanner;

public class Pulses {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int t = 0; t < T; t++) {
            int[] nums = new int[3];
            for (int i = 0; i < 3; i++) {
                nums[i] = sc.nextInt();
            }
            
            Arrays.sort(nums);
            int rem = 5;
            
            while (rem > 0) {
                nums[0]++;
                rem--;
                Arrays.sort(nums);
            }
            
            int ans = nums[0] * nums[1] * nums[2];
            System.out.println(ans);
        }
        sc.close();
    }
}
