import java.util.Scanner;

public class Shifts {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(); 
        for (int i = 0; i < T; i++) { 
            StringBuilder S = new StringBuilder(sc.next()); 
            int count = 0; 
            int sum = 0; 

            for (int j = 0; j < S.length(); j++) 
            { 
                if (S.charAt(j) == '1') 
                { 
                    count++; 
                    while (S.charAt(j + 1) != '0')
                    { 
                        count++; 
                        j++;
                    }
                }
                
                sum+=(count+1)/2;
                
                if (sum != 0) { 
                    count = 0;
                    j=-1;
                }
            }
            System.out.println(sum); 
       
    }
    sc.close(); 
}
}
