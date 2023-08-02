/*
• Floyd-Warshall is used to find the shortest paths between all pairs of vertices in a weighted graph.
• It works for both directed and undirected graphs, and can handle negative edge weights without any issues.
• The algorithm has a time complexity of O(V^3), where V is the number of vertices, 
  making it suitable for small to medium-sized graphs but less efficient for large graphs 
  compared to other single-source shortest path algorithms.
  However, its advantage lies in computing all shortest paths in a single run.

*/


//Time Complexity - O(n^3)
class Solution {
  public:
	void shortest_distance(vector<vector<int>>& grid){
        int n = grid.size();
        
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<n; j++) {
                
                if(grid[i][j] == -1)
                    grid[i][j] = 100000;
                
            }
        }
        
        for(int via = 0; via < n; via++) {
            
            for(int i = 0; i<n; i++) {
                for(int j = 0; j<n; j++) {
                    
                   grid[i][j] = min(grid[i][j], grid[i][via] + grid[via][j]);
                    
                }
            }
        }
        
        
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<n; j++) {
                
                if(grid[i][j] == 100000)
                    grid[i][j] = -1;
                
            }
        }
	}
};
