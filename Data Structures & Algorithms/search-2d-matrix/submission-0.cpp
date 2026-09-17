class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low_overall = 0;
        int high_overall = matrix.size() - 1;
        while(low_overall <= high_overall){
            int middle_overall = (low_overall+high_overall)/2;
            if (target < matrix[middle_overall][0]) {
                high_overall = middle_overall - 1;
            } 
            else if (target > matrix[middle_overall].back()) {
                low_overall = middle_overall + 1;
            }
            else{
                int low = 0;
                int high = matrix[middle_overall].size() - 1;
                while(low <= high){
                    int middle = (high+low)/2;
                    if(matrix[middle_overall][middle] == target){
                        return true;
                    }
                    else if(matrix[middle_overall][middle] < target){
                        low = middle + 1;
                    }
                    else{
                        high = middle - 1;
                    }
                }
                return false;
            }
            
        }
        return false;
    }
};
