class Solution {
public:

    // bool searchRow(vector<int>rowIndex , int target){
    //     int low = 0;
    //     int high = rowIndex.size() - 1;

    //     while(low <= high){
    //         int mid = low + (high - low)/2;

    //         if(target == rowIndex[mid]){
    //             return true;
    //         }
    //         else if(target > rowIndex[mid]){
    //             low = mid + 1;
    //         }
    //         else{
    //             high = mid - 1;
    //         }
    //     }
         
    //      return false;

    // }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        // int row = matrix.size();
        // int col = matrix[0].size();

        // int low = 0;
        // int high = row - 1;

        // for(int i = 0; i < row; i++){
        //     if(target >= matrix[i][0] && target <= matrix[i][col - 1]){
               
        //        if(searchRow(matrix[i] , target)){
        //         return true;
        //        }
        //     }
        // }
        // return false;

        //  Comment Section Is also another bruteforce approach

        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col - 1;

        while(rowIndex < row && colIndex >= 0){

            int element = matrix[rowIndex][colIndex];

            if(target == element){
                return true;
            }
            else if(target > element){
                rowIndex++;
            }
            else{
                colIndex--;
            }

        }

        return false;


        
    }
};