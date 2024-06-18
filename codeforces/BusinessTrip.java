import java.util.*;
 
class BusinessTrip {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int k = sc.nextInt();
        int[] arr = new int[12];
        for(int i =0 ;i<12;i++)
        {
            arr[i]= sc.nextInt();
        }
        Arrays.sort(arr);
        int sum=0;
        int count=0;
        for(int i = 11 ; i >= 0; i--)
        {
            if (sum >= k) {
                break;
            }
            sum += arr[i];
            count++;
        }
        if (sum < k) {
            System.out.print(-1);
        } else {
            System.out.print(count);
        }
        sc.close();
    }
}
