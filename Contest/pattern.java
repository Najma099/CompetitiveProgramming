public class pattern {
    public static void main(String[] args) 
    {
        int count = 3;
        for(int i = 1; i <= 4; i++) 
        {

                for(int k = 1; k <= ( 3 - i +1)*2;k++) 
                {
                    System.out.print("-");
                }
                if(i == 1)
                    System.out.print(i);
                else 
                {
                    int sum = 0;
                    for(int y = i-1; y >=1; y--) 
                    {
                        System.out.print(count +" ");
                        sum = sum + count;
                        sum = sum + count +((y-1)*2 + 1)*2;
                        count += 2;

                    }
                    System.out.print(sum + " ");
                    for(int y = i -1; y >= 1; y--) {
                        System.out.print(count+ " ");
                        count += 2;
                    }
                }
            System.out.println();
        }
        
    }
}