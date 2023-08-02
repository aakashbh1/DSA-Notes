/*
Dijkstra's algorithm is used to find the shortest paths from a single source 
vertex to all other vertices in a graph with non-negative edge weights.

It guarantees correct shortest path distances and is commonly used in routing
algorithms, navigation systems, and transportation/logistics applications.

The time complexity depends on the implementation but is generally efficient,
with the best case being O((V + E) * log(V)) when using a priority queue for sparse graphs.
However, it does not handle graphs with negative edge weights,
for which the Bellman-Ford algorithm should be used.
*/

//USING PRIORITY QUEUE
//Time : O(E * log(V))
//E = number of edges
//V = number of vertices
class Solution
{
	public:
	   //Function to find the shortest distance of all the vertices
    	   //from the source vertex S.
	    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S) {

		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

		vector<int> result(V, INT_MAX);

		result[S] = 0;
		pq.push({0, S});

		while(!pq.empty()) {

		    int d  = pq.top().first;
		    int node = pq.top().second;
		    pq.pop();

		    for(auto &vec : adj[node]) {

			int adjNode = vec[0];
			int dist    = vec[1];

			if(d + dist < result[adjNode]) {

			    result[adjNode] = d + dist;
			    pq.push({d+dist, adjNode});

			}

		    }

		}

		return result;

	    }
};


// USING SET 
//Time : O(E * log(V))
//E = number of edges
//V = number of vertices
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
	//from the source vertex S.
	vector <int> dijkstra(int V, vector<vector<int>> adj[], int S) {
	    set<pair<int, int>> pq;

            vector<int> result(V, INT_MAX);

            result[S] = 0;
            pq.insert({0, S});

            while(!pq.empty()) {

                auto &it = *pq.begin();
                int d  = it.first;
                int node = it.second;
                pq.erase(it);

                for(auto &vec : adj[node]) {

                    int adjNode = vec[0];
                    int dist    = vec[1];

                    if(d + dist < result[adjNode]) {
                        
                        if(result[adjNode] != INT_MAX) {
                            auto iter = pq.find({result[adjNode], adjNode});
                            pq.erase(iter);
			    //OR, pq.erase({result[adjNode], adjNode});
                        }
                        
                        result[adjNode] = d + dist;
                        pq.insert({d+dist, adjNode});

                    }

                }

            }

            return result;
	}
};
