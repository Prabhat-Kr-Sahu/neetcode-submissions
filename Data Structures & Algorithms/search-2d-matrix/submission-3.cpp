class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n = mat.size();
        int m = mat[0].size();
        // cout<< n << "  D  "<< m<<endl;
        int s= 0;
        int e = n* m -1;
        
         
        while(s <= e){
            int mid = s +  (e - s)/2;
            // cout<< mat[mid/ m][mid % m]<<endl;
            if(mat[mid/ m][mid % m] == t){
                return true;
            }
            else if( mat[mid/m][mid % m] > t){
                e = mid -1;
            }
            else{
                s = mid+1;
            }
        }

        return false;
    }
};
