class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int row=arr.size();
        int col=arr[0].size();

        vector<int>rowset(row,0);
        vector<int>colset(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
            if(arr[i][j]==0){
                rowset[i]=1;
                colset[j]=1;
            }
        }
    }
        for(int i=0;i<row;i++){
            if(rowset[i]==1){
                for(int j=0;j<col;j++){
                    arr[i][j]=0;
                }
            }
        }

       for(int j=0;j<col;j++){
            if(colset[j]==1){
                for(int i=0;i<row;i++){
                    arr[i][j]=0;
                }
            }
        }
    }
};
