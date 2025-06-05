class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int maxproduct=arr[0];
        int minproduct=arr[0];
        int result=arr[0];
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]<0) swap(maxproduct,minproduct);
            
            maxproduct=max(arr[i],maxproduct*arr[i]);
            minproduct=min(arr[i],minproduct*arr[i]);
            result=max(result,maxproduct);
        }
        return result;
    }
};
