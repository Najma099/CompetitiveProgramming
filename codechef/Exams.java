import java.util.Scanner;
public class Exams
{
  public static void main(String[] args)
  {
      Scanner sc= new Scanner(System.in);
      int T = sc.nextInt();
      for(int i=0;i<T;i++)
      {
          float X=sc.nextFloat();
          float Y=sc.nextFloat();
          int Z =sc.nextInt();
          if(Z/(X*Y)>0.5)
          System.out.println("YES");
          else
          System.out.println("No");
      }
      sc.close();
  }
}