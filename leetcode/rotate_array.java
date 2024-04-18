

public class rotate_array {
    public void rotate(int[] nums, int k) {
        k %= nums.length;
        int i=0;
        int j=nums.length-1;
        while(i<j)
        {
            reverse(nums,i,j);
            i++;
            j--;
        }
        i=0;
        j=k-1;
        while(i<j)
        {
            reverse(nums,i,j);
            i++;
            j--;
        }
        i=k;
        j=nums.length-1;
        while(i<j)
        {
            reverse(nums,i,j);
            i++;
            j--;
        }
    }
    public void reverse(int[] nums,int i,int j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
}
