class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashMap<Integer, Integer> count = new HashMap<Integer, Integer>();
        for (int a : nums) {
            count.put(a, 0);
        }
        for (int b : nums) {
            if (count.containsKey(b)) {
                int a = count.get(b);
                a += 1;
                count.put(b, a);
            }
        }
        for (Integer i : count.values()) {
            if (i >= 2) {
                return true;
            }
        }
        return false;
    }
}
    