//STL Functions for Vectors:
#include <iostream>
#include <vector>

int main() {
    // Vector functions
    std::vector<int> nums;

    // push_back() and pop_back()
    nums.push_back(10);
    nums.push_back(20);
    nums.pop_back();

    // size() and empty()
    if (nums.empty()) {
        std::cout << "Vector is empty\n";
    } else {
        std::cout << "Vector size: " << nums.size() << "\n";
    }

    // front() and back()
    nums.push_back(30);
    std::cout << "First element: " << nums.front() << "\n";
    std::cout << "Last element: " << nums.back() << "\n";

    // clear() and insert()
    nums.clear();
    nums.insert(nums.begin(), 5); // Insert at the beginning

    // erase()
    nums.erase(nums.begin());

    // resize()
    nums.resize(3, 7); // Resize to size 3 and fill with 7

    // sort() and reverse()
    std::sort(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.end());

    // swap()
    std::vector<int> other = {1, 2, 3};
    nums.swap(other);

    // Output the vector
    for (int num : nums) {
        std::cout << num << " ";
    }

    return 0;
}


//STL Functions for Strings:
#include <iostream>
#include <string>

int main() {
    // String functions
    std::string str = "Hello, World!";

    // length() and size()
    std::cout << "String length: " << str.length() << "\n";

    // empty()
    if (str.empty()) {
        std::cout << "String is empty\n";
    } else {
        std::cout << "String is not empty\n";
    }

    // append() and +=
    str.append(" Welcome");
    str += " to C++";

    // insert()
    str.insert(13, " Awesome");

    // erase()
    str.erase(7, 8); // Remove "Welcome"

    // replace()
    str.replace(7, 7, " C++");

    // find() and rfind()
    std::cout << "Position of 'C++': " << str.find("C++") << "\n";
    std::cout << "Last position of 'C++': " << str.rfind("C++") << "\n";

    // substr()
    std::string sub = str.substr(7, 3); // Extract " C++"

    // to_upper() and to_lower()
    for (char &c : str) {
        c = std::toupper(c);
    }
    std::string lowerStr = str;
    for (char &c : lowerStr) {
        c = std::tolower(c);
    }

    // Output the string
    std::cout << str << "\n";
    std::cout << sub << "\n";
    std::cout << lowerStr << "\n";

    return 0;
}
