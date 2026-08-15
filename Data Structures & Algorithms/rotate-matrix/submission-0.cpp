class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int row=arr.size();
        int col=arr[0].size();

    for(int i=0;i<row;i++){
        for(int j=i+1;j<col;j++){
                swap(arr[j][i],arr[i][j]);
            }
        }
        

        for(int i=0;i<row;i++){
            reverse(arr[i].begin(),arr[i].end());
        }

    

    }
};
