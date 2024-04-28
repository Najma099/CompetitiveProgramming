import java.util.Arrays;

public class single_number_2 {
     public int singleNumber(int[] nums) {
        Arrays.sort(nums);
        for(int i=0;i<nums.length-2;i++)
        {
            if(nums[i]==nums[i+1] && nums[i]==nums[i+2])
            {
                i+=2;
                continue;
            }
            else
            {
               return nums[i];
            }

        }
        return nums[nums.length-1];
    }
}
