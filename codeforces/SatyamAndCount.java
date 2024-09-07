import java.util.Scanner;
public class SatyamAndCount {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int nox = 0;
            int noy = 0;

            for(int i = 0; i < n ; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                boolean flag = false;
                if(a == 0 && b == 0)
                    flag = true;
                else if(b == 0)
                    nox++;
                else if(b == 1)
                    noy++;

                if(nox != 0 && noy != 0) 
                {
                    if(flag) 
                    {
                        if(nox >= noy) {
                            nox++;
                        }
                            
                        else
                            noy++;
                    }
                }
                
            }
            if(nox >= noy) {
                int ans = (nox - 1*2)*noy;
                System.out.println(ans);
            }
            else {
                int ans = (noy - 1*2)*nox;
                System.out.println(ans);
            }
        }
    }
}
