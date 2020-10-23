//All unique triplets in the array which gives the sum of zero i.e. such that a + b + c = 0.

class Triplet_sum {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> ans_arr= new ArrayList();
  
        Arrays.sort(nums);
        for(int i=0; i<nums.length-2; i++){
            if(i==0 || nums[i]!=nums[i-1]){
                int low=i+1;
                int high= nums.length-1;
                int sum= 0-nums[i];
                
                while(low<high){
                    if(nums[low]+nums[high]==sum){
                        ans_arr.add(Arrays.asList(nums[low], nums[i], nums[high]));
               
                        low++;
                        high--;
                        
                    }
                    else if(nums[low]+nums[high]<sum) 
                        low++;
                    else high--;
                    
                    while((low<high && nums[low]==nums[low+1]))
                        low++;
                        while((low<high && nums[high]==nums[high-1]))
                        high--;
                }
            }
            
        }
        return ans_arr;
    }
}