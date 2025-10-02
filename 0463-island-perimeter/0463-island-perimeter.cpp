class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int result=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    if(i-1==-1){
                      result++;  
                    } else{
                       if(grid[i-1][j]==0){
                            result++;  
                       } 
                    } 
                    
                    if(i+1==grid.size()){ 
                      result++;  
                    } else{
                       if(grid[i+1][j]==0){
                            result++;  
                       } 
                    } 
                    if(j-1==-1){ 
                      result++;  
                    } else{
                       if(grid[i][j-1]==0){
                            result++;  
                       } 
                    } 
                    if(j+1==grid[i].size()){ 
                      result++;  
                    } else{
                       if(grid[i][j+1]==0){
                            result++;  
                       } 
                    } 
                }
            }
        }
        return result;
    }
};