class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int n=arr.size();
        // Start from the last digit and move towards the first digit
        for(int i=n-1;i>=0;i--){
            // If the current digit is less than 9
            if(arr[i]<9){
                //simply add 1
                arr[i]++;
                return arr;
            }
            // If the digit is 9, make it 0
            // and carry 1 to the previous dig
            arr[i]=0;
        }
        // If all digits were 9, add 1 at the beginning
           arr.insert(arr.begin(),1);

        return arr;
    }
};
