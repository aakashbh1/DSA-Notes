priority_queue<int> pq; // This will create a max-heap  
priority_queue<int, vector<int>, greater<int>> pq; // This will create a min-heap   
 
priority_queue<pair<int, int>> pq; // This will create a max-heap based on the first element of the pair  
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // This will create a min-heap based on the first element of the pair  


// WAY-1  
priority_queue<pair<int, int>, vector<pair<int, int>>, [](const pair<int, int>& a, const pair<int, int>& b) { // use const auto&a, const auto&b  
    return a.second < b.second;  
}> pq; // Min-heap based on the second element  


// WAY-2  
// Define priority queue with custom comparator using lambda function  
auto cmp = [](const pair<int, int>& a, const pair<int, int>& b) {  // lambda function
    return a.second > b.second; // Change to '<' for min-heap  
};  
priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);  


// WAY-3
struct Compare {  
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {  
        return a.second < b.second;  
    }  
};  

priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq; // Min-heap based on the second element  


