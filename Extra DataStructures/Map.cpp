myMap[key] = value; // Insert a key-value pair
myMap.insert(std::make_pair(key, value)); // Alternative insertion method
ValueType value = myMap[key]; // Access the value associated with the key
if (myMap.find(key) != myMap.end()) {
    // Key exists in the map
}
int size = myMap.size(); // Number of elements in the map
bool isEmpty = myMap.empty(); // Check if the map is empty
myMap.erase(key); // Remove element with the specified key
for (const auto& pair : myMap) {
    KeyType key = pair.first;
    ValueType value = pair.second;
    // Process key-value pair
}
myMap.clear(); // Removes all elements from the map
auto it = myMap.lower_bound(key); // Iterator to the first element not less than the key
auto it = myMap.upper_bound(key); // Iterator to the first element greater than the key
myMap.erase(it); // Erase element using an iterator
myMap.erase(itStart, itEnd); // Erase elements in a range using iterators

map: Sorted associative container with O(log N) average time complexity for insertion, access, and deletion, suitable when keys need to be ordered.
unordered_map: Hash-based container with O(1) average time complexity for insertion, access, and deletion, ideal for fast lookups when order doesn't matter, but hash collisions can affect performance.
multimap: Similar to map but allows multiple elements with the same key, useful when storing multiple values for the same key.
  
map
Insertion (myMap[key] = value or myMap.insert()):
Average Case: O(log N)
  Worst Case: O(N) when the tree becomes unbalanced (e.g., inserting elements in a sorted order)

Access (ValueType value = myMap[key]):
Average Case: O(log N)
Worst Case: O(N) when the tree becomes unbalanced

Checking Existence (myMap.find(key)):
Average Case: O(log N)
Worst Case: O(N) when the tree becomes unbalanced

Erasing Elements (myMap.erase(key)):
Average Case: O(log N)
Worst Case: O(N) when the tree becomes unbalanced

Iterating Through Elements:
O(N), where N is the number of elements in the map
Lower Bound and Upper Bound (myMap.lower_bound() and myMap.upper_bound()):
Average Case: O(log N)
Worst Case: O(N) when the tree becomes unbalanced

Clearing the Map (myMap.clear()):
O(N), where N is the number of elements in the map


unordered_map:
Insertion (myUnorderedMap[key] = value):
Average Case: O(1)
Worst Case: O(N) when there are hash collisions and rehashing occurs

Access (ValueType value = myUnorderedMap[key]):
Average Case: O(1)
Worst Case: O(N) when there are hash collisions and rehashing occurs

Checking Existence (myUnorderedMap.find(key)):
Average Case: O(1)
Worst Case: O(N) when there are hash collisions and rehashing occurs

Erasing Elements (myUnorderedMap.erase(key)):
Average Case: O(1)
Worst Case: O(N) when there are hash collisions and rehashing occurs

Iterating Through Elements:
O(N), where N is the number of elements in the map

Clearing the Map (myUnorderedMap.clear()):
O(N), where N is the number of elements in the map

Note: The performance of unordered maps heavily depends on the quality of the hash function and load factor.
In the worst case, where there are many hash collisions, the complexity can degrade to O(N).
