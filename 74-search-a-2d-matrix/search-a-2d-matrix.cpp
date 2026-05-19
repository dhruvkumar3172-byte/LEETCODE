class Solution {
public:

    //  bool search(vector<int>& row , int target){
    //     int low = 0;
    //     int high = row.size() - 1;

    //     while(low <= high){
    //         int mid = low + (high - low)/2;

    //         if(target == row[mid]){
    //             return true;
    //         }
    //         else if(target >= row[mid]){
    //             low = mid + 1;
    //         }
    //         else{
    //             high = mid - 1;
    //         }
    //     }
    //     return false;

    //     }


    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int row = matrix.size();
        // int col = matrix[0].size();

        // int low = 0;
        // int high = row - 1;
        // int targetRow = -1;
        

        // while(low <= high){
        //     int mid = low +(high - low) / 2;
        //     if(target >= matrix[mid][0] && target <= matrix[mid][col - 1]){
               
        //         targetRow = mid;
        //         break;

        //     }
        //     else if(target >  matrix[mid][0] ){
        //         low = mid + 1;
        //     }
        //     else{
        //         high = mid - 1;
        //     }
        // }

        // if(targetRow == -1){
        //   return false;
        // }

        // return search(matrix[targetRow] , target);



    // ALL COMMENT SECTION IS ITSELF A DIFFN SOLUTION 

    int row = matrix.size();
    int col = matrix[0].size();

    int st = 0;
    int end = row * col - 1;
   
    while(st <= end){


         int mid = st + (end - st)/2;

         int element = matrix[mid / col][mid % col];


        if(element == target){
            return true;
        }

         if(element >= target){
            end = mid - 1;
         }

          if(element <= target){
            st = mid + 1;
          }
    }
    return false;
        
    }
};