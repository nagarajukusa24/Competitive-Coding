class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] out = new int[nums.length];
        for(int i=0;i<nums.length;i++){
            int c=0;
            for(int j=0;j<nums.length;j++){
                if(nums[i]>nums[j]){
                    c+=1;
                }
            }
            out[i]=c;
        }
        return out;
        // for(int i=0;i<out.length;i++){
        //     System.out.println(out[i]);
        // }
    }
}