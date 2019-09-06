
class AddSum {
    public static int[] twoSum(int[] nums, int target) {
        int[] result= new int[2];
        
        for (int i=0; i<nums.length; i++){
            for (int k=i+1; k<nums.length;k++){
                if (nums[i]+nums[k]==target){
                    result[0]=i;
                    result[1]=k;
                    return result;
                }
            }
        }
         return result;
    }   
    
    public static void main(String[] args){
        int[] nums= {2,7,11,15};
        int[] answ= twoSum(nums, 9);
        for (int i : answ){
            System.out.print (i);
        }
        System.out.println();
    }
}