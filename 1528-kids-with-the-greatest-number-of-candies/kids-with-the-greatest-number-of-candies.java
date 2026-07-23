class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        ArrayList<Boolean> ans = new ArrayList<>();
        int m = Integer.MIN_VALUE;
        for(int i = 0;i<candies.length;i++){
            m = Math.max(m , candies[i]);
        }
        for(int i = 0;i<candies.length;i++){
           if(candies[i] + extraCandies >= m){
            ans.add(true);
           }else{
            ans.add(false);
           }
        }
        return ans;
    }
}