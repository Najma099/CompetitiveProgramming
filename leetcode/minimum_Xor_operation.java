public class minimum_Xor_operation {
    public int minOperations(int[] nums, int k) {
        int ans=nums[0];
        for(int i=1;i<nums.length;i++)
        {
            ans=ans^nums[i];
        }
        int c=ans^k;
        int count=0;
        while(c!=0)
        {
            if((c & 1)==1)
            count++;
            c=c>>1;
        }
        return count;
    }
}
