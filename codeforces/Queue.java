import java.util.Scanner;

public class Queue {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); 
        int t = sc.nextInt(); 
        sc.nextLine();
        
        
        String s = sc.nextLine();
        
       
        char[] arr = s.toCharArray();
        
       
        for (int i = 0; i < t; i++) {
            for (int j = 0; j < n - 1; j++) {
               
                if (arr[j] == 'B' && arr[j + 1] == 'G') {
                    char temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    j++; 
                }
            }
        }
        
        
        System.out.println(new String(arr));
        sc.close();
    }
}
