
public class merge {
    public static void main(String[] args) {
        int arr[]={2,4,11,17,19};
        int brr[]={3,7,9,100};
        int crr[]= new int[arr.length+brr.length];
        int a=0;
        int b=0;
        int i=0;
        while(a<arr.length && b<brr.length)
        {
            if(arr[a]<brr[b])
            {
                crr[i]=arr[a];
                i++;
                a++;
            }
            else
            {
                crr[i]=arr[b];
                i++;
                b++;
            }
        }
        if(a<arr.length)
        {
            crr[i]=arr[a];
            i++;
        }
        else
        {
            crr[i]=brr[b];
            i++;
        }
       
    }
}
