//std::lower_bound returns an iterator pointing to the first element in the range [first, last) that is not less than (i.e., greater or equal to) value.
//std::upper_bound returns an iterator pointing to the first element in the range [first, last) that is greater than value.

// in vectors
int main() {
    std::vector<int> vec = {1, 2, 2, 3, 4, 5, 6, 7, 8};

    // Finding lower bound of 3
    auto lb = std::lower_bound(vec.begin(), vec.end(), 3); // return iterator
    if (lb != vec.end()) {
        int index = lb - vec.begin(); // returns index 
        std::cout << "Lower Bound of 3 is at index: " << index << ", value: " << *lb << std::endl; // *lb is the value
    } else {
        std::cout << "3 is greater than or equal to all elements" << std::endl;
    }

    // Finding upper bound of 3
    auto ub = std::upper_bound(vec.begin(), vec.end(), 3);
    if (ub != vec.end()) {
        int index = ub - vec.begin();
        std::cout << "Upper Bound of 3 is at index: " << index << ", value: " << *ub << std::endl;
    } else {
        std::cout << "3 is greater than all elements" << std::endl;
    }

    return 0;
}

// in maps and sets 
int main() {
    std::map<int, int> m = {{1, 10}, {2, 20}, {3, 30}, {4, 40}};

    // Finding lower bound of 3
    auto lb = m.lower_bound(3);
    if (lb != m.end()) {
        int key = lb->first;
        int value = lb->second;
        std::cout << "Lower Bound of 3 is at key: " << key << ", value: " << value << std::endl;
    } else {
        std::cout << "3 is greater than or equal to all keys" << std::endl;
    }

    // Finding upper bound of 3
    auto ub = m.upper_bound(3);
    if (ub != m.end()) {
        int key = ub->first;
        int value = ub->second;
        std::cout << "Upper Bound of 3 is at key: " << key << ", value: " << value << std::endl;
    } else {
        std::cout << "3 is greater than all keys" << std::endl;
    }

    return 0;
}
