#include <iostream>
#include <vector>

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Using iterators to traverse the vector
    vector<int>::iterator it; // Declare an iterator
    
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " "; // Access the value using dereferencing
    }
    
    return 0;
}

#include <iostream>
#include <vector>

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Using range-based for loop to traverse the vector
    for (int number : numbers) {
        cout << number << " ";
    }
    
    return 0;
}
