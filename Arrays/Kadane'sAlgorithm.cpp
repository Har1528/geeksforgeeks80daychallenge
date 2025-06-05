class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int currsum=arr[0];
        int maxsum=arr[0];
        for(int i=1;i<arr.size();i++){
            currsum=max(arr[i],currsum+arr[i]);
            maxsum=max(currsum,maxsum);
        }
        return maxsum;
    }
};
