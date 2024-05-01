
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class second {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(); 
        for (int i = 0; i < T; i++) { 
            StringBuilder S = new StringBuilder(sc.next()); 
            int count = 0; 
            List<Integer> costs = new ArrayList<>(); 
            int sum = 0; 

            for (int j = 0; j < S.length(); j++) { 
                if (S.charAt(j) == '1') { 
                    count++; 
                    while (j + 1 < S.length() && S.charAt(j + 1) != '0') { 
                        count++; 
                        j++;
                    }
                    costs.add((count + 1) / 2); 
                }
                
                sum += (count + 1) / 2; 
                count = 0; 
                if (sum != 0) { 
                    j = -1;
                }
            }
            
           
            for (int cost : costs) {
                System.out.print(cost + " ");
            }
            System.out.println(); 
        }
        sc.close(); 
    }
}


