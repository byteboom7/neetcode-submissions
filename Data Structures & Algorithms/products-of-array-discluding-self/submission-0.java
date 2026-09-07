class Solution {
    public static int[] productExceptSelf(int[] nums) {
    int[] result = new int[nums.length]; 
    
    for (int i = 0; i < nums.length; i++) {
        int one = 1;
        for (int j = 0; j < nums.length; j++) {
            
            if(i!=j){
            one = one * nums[j]; 
            }
            
        }
        result[i] = one;
        
    }
    return result;
}
    public static void main(String[] args){
        int[] list = {1,2,3,4};
        int[] answer = productExceptSelf(list);
        System.out.println(Arrays.toString(answer));
    }
}  
