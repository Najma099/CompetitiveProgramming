import java.util.Scanner;
public class EvenIndices {
    public static void print(int[] arr, int n) {
        if(n >= arr.length)
            return;
        else {
            print(arr,n+2);
            System.out.print(arr[n] + " ");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        print(arr,0);
        sc.close();
    }
}
