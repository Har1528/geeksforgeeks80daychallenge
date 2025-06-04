class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n=arr.size();
        int slow=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                arr[slow]=arr[i];
                slow++;
            }
        }
        for(int i=slow;i<n;i++){
            arr[i]=0;
        }
    }
};
