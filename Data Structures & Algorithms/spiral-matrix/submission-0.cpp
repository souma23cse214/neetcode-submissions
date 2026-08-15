class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int row=arr.size();
        int col=arr[0].size();
        
        int left=0,right=col-1,top=0,bottom=row-1;
        vector<int>ans;
        while(left<=right && top<=bottom){
        if(left<=right && top<=bottom)
        for(int i=left;i<=right;i++){
            ans.push_back(arr[top][i]);
        }
        top++;
        if(left<=right && top<=bottom)
        for(int i=top;i<=bottom;i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        if(left<=right && top<=bottom)  
        for(int i=right;i>=left;i--){
            ans.push_back(arr[bottom][i]);
        }
        bottom--;
        if(left<=right && top<=bottom)
        for(int i=bottom;i>=top;i--){
            ans.push_back(arr[i][left]);
        }
        left++;
    }
        return ans;
    }
};
