/*Complete the functions below*/
vector<int> parent;
vector<int> rank;

int find (int x) {
    if (x == parent[x]) 
        return x;

    return parent[x] = find(parent[x]);
}

void Union (int x, int y) {
    int x_parent = find(x);
    int y_parent = find(y);

    if (x_parent == y_parent) 
        return;

    if(rank[x_parent] > rank[y_parent]) {
        parent[y_parent] = x_parent;
    } else if(rank[x_parent] < rank[y_parent]) {
        parent[x_parent] = y_parent;
    } else {
        parent[x_parent] = y_parent;
        rank[y_parent]++;
    }
}

// CLASS OF DSU
class Union{
    public:
    vector<int> rank,parent;
    Union(int n){
        rank.resize(n+1,0);
        parent.resize(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int find(int node){
        if(parent[node]==node) return node;
        else return parent[node]=find(parent[node]);
    }
    
    void merge(int a, int b){
        int up_a=find(a);
        int up_b=find(b);
        if(up_a==up_b) return;

        if(rank[up_a]>rank[up_b]) parent[up_b]=up_a;
        else if(rank[up_a]<rank[up_b]) parent[up_a]=up_b;
        else {
            parent[up_a]=up_b;
            rank[up_b]++;
        }
    }
    
};
