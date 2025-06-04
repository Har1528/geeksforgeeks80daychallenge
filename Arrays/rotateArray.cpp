class Solution {
  public:
    void reverseArray(vector<int> &arr, int n, int m) {
        // code here
        int i=n,j=m;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d = d % n;
        reverseArray(arr, 0, d - 1);
        reverseArray(arr,d,n-1);
        reverseArray(arr,0,n-1);
    }
};
