/*
1. Bellman-Ford algorithm is used to find the shortest paths from a single source vertex to all other vertices in a graph,
even when the graph contains negative edge weights.

2. It is a more versatile algorithm compared to Dijkstra's 
  as it can handle graphs with negative edge weights and detect negative cycles.
  This makes it suitable for various applications, including network routing, 
 distance-vector protocols, and traffic engineering.

3. The time complexity of Bellman-Ford algorithm is O(V * E),
where V is the number of vertices and E is the number of edges. 
Despite its higher time complexity, it remains a valuable option when negative edge weights or cycles are present in the graph.
*/


class Solution {
  public:
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        vector<int> result(V, 1e8);
        result[S] = 0;
        
        for(int c = 1; c<=V-1; c++) {
            
            for(auto &edge : edges) {
                
                int u = edge[0];
                int v = edge[1];
                int w = edge[2];
                
                if(result[u] != 1e8 && result[u] + w < result[v]) {
                    result[v] = result[u] + w;
                }
                
            }
            
        }
        
        //Now detect negative cycle 
        for(auto &edge : edges) {
            
            int u = edge[0];
                int v = edge[1];
                int w = edge[2];
                
                if(result[u] != 1e8 && result[u] + w < result[v]) {
                    return {-1};
                }
        }
        
        return result;
    }
};
