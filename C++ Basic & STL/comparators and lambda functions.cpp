priority_queue<int> pq; // This will create a max-heap  
priority_queue<int, vector<int>, greater<int>> pq; // This will create a min-heap   
 
priority_queue<pair<int, int>> pq; // This will create a max-heap based on the first element of the pair  
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // This will create a min-heap based on the first element of the pair  
//LAAMBA FUNCTIONS 
auto sum = [](int a, int b) { return a + b; };
int result = sum(3, 4); // result will be 7

//WAY 1 (VECTORS) 
 static bool comp(const pair<string,int> &p1, const pair<string,int> &p2) // comparator function 
    {
       if(p1.second != p2.second) return p1.second > p2.second;
       else return p1.first < p2.first;
    }
  sort(pr.begin(),pr.end(),comp); // for vectors not pq,map,sets...


//WAY 2 (PQ,SET,MAPS) 
typedef pair<char, int> P;
struct comp { // using struct 
        bool operator()(P &p1, P &p2) { //changing operator 
            return p1.second<p2.second; //max-heap
        }
    };
 priority_queue<P, vector<P>, comp> pq;


//WAY 3 (PQ,SET,MAPS)
class myComparator { //using class
  public:
    bool operator() (const psi &p1, const psi &p2) {
      if(p1.first == p2.first) return p1.second < p2.second;
      
      return p1.first > p2.first;
    }
 priority_queue<psi, vector<psi>, myComparator> pq;
