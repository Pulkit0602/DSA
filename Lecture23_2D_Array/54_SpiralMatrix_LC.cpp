class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        //index rows,rowe,cols,cole
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row*col;
        int count = 0;
        
        int rows = 0 , cols = 0 ;
        int rowe = row-1;
        int cole = col-1;
        cout<<total;
        while (count < total)
        {
            //first row
            for (int index = cols ; count < total && index <= cole ; index++)
            {
                //cout<<matrix[rows][index]<<" ";
                ans.push_back(matrix[rows][index]);
                count++;                   
            }
            rows++;
            
            //last col
            for (int index = rows ; count < total && index <= rowe ; index++)            
            {                
                //cout<<matrix[index][cole]<<" ";
                ans.push_back(matrix[index][cole]);
                count++;                           
            }
            cole--;
            
            // last row
            for (int index = cole ; count < total && index >= cols ; index--)            
            {
                //cout<<matrix[rowe][index]<<" ";
                ans.push_back(matrix[rowe][index]);
                count++;                           
            }   
            rowe--;
            
            //first col
            for (int index = rowe ; count < total && index >= rows ; index--)             
            {
                //cout<<matrix[index][cols]<<" ";
                ans.push_back(matrix[index][cols]);
                count++;                          
            }
            cols++;
        }
        return ans;        
    }
};