//set: Sorted associative container with O(log N) average time complexity for insertion, access, and deletion of individual elements,
//useful when maintaining a sorted collection of unique elements.
//unordered_set: Hash-based container with O(1) average time complexity for insertion, access, and deletion of individual elements,
//suitable for faster lookups when order doesn't matter, but hash collisions can impact performance.
//multiset: Similar to set but allows multiple elements with the same value, useful when you need to maintain a collection with duplicate values.

mySet.insert(value); // Insert a value into the set
auto it = mySet.find(value); // Find an element, returns an iterator
if (it != mySet.end()) {
    // Element found
}
if (mySet.count(value) > 0) {
    // Element exists in the set
}
int size = mySet.size(); // Number of elements in the set
bool isEmpty = mySet.empty(); // Check if the set is empty
mySet.erase(value); // Remove an element from the set
for (const auto& value : mySet) {
    // Process each unique element
}
mySet.clear(); // Removes all elements from the set
auto it = mySet.lower_bound(value); // Iterator to the first element not less than the value
auto it = mySet.upper_bound(value); // Iterator to the first element greater than the value
mySet.erase(it); // Erase element using an iterator
mySet.erase(itStart, itEnd); // Erase elements in a range using iterators


//std::set:
Insertion (mySet.insert()):
Average Case: O(log N)
Worst Case: O(N) when the tree becomes unbalanced (e.g., inserting elements in sorted order)

Accessing Elements (mySet.find()):
Average Case: O(log N)
Worst Case: O(N) when the tree becomes unbalanced

Checking Existence (mySet.count()):
Average Case: O(log N)
Worst Case: O(N) when the tree becomes unbalanced

Erasing Elements (mySet.erase()):
Average Case: O(log N)
Worst Case: O(N) when the tree becomes unbalanced

Iterating Through Elements:
O(N), where N is the number of elements in the set

Lower Bound and Upper Bound (mySet.lower_bound() and mySet.upper_bound()):
Average Case: O(log N)
Worst Case: O(N) when the tree becomes unbalanced

Clearing the Set (mySet.clear()):
O(N), where N is the number of elements in the set

//std::unordered_set:
Insertion (myUnorderedSet.insert()):
Average Case: O(1)
Worst Case: O(N) when there are hash collisions and rehashing occurs

Accessing Elements (myUnorderedSet.find()):
Average Case: O(1)
Worst Case: O(N) when there are hash collisions and rehashing occurs

Checking Existence (myUnorderedSet.count()):
Average Case: O(1)
Worst Case: O(N) when there are hash collisions and rehashing occurs

Erasing Elements (myUnorderedSet.erase()):
Average Case: O(1)
Worst Case: O(N) when there are hash collisions and rehashing occurs

Iterating Through Elements:
O(N), where N is the number of elements in the set

Clearing the Set (myUnorderedSet.clear()):
O(N), where N is the number of elements in the set

Note: The performance of std::unordered_set heavily depends on the quality of the hash function and load factor.
In the worst case, where there are many hash collisions, the complexity can degrade to O(N).
