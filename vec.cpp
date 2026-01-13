
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector
    vector<int> nums;

    // Add elements
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    // Display elements
    cout << "Elements: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << "\n";

    // Access elements
    cout << "First element: " << nums.front() << "\n";
    cout << "Last element: " << nums.back() << "\n";
    cout << "Element at index 1: " << nums.at(1) << "\n";

    // Size and capacity
    cout << "Size: " << nums.size() << "\n";
    cout << "Capacity: " << nums.capacity() << "\n";

    // Insert element at position 1
    nums.insert(nums.begin() + 1, 15);
    cout << "After insert: ";
    for (int n : nums) cout << n << " ";
    cout << "\n";

    // Erase element at position 2
    nums.erase(nums.begin() + 2);
    cout << "After erase: ";
    for (int n : nums) cout << n << " ";
    cout << "\n";

    // Resize vector
    nums.resize(5, 100); // Add extra elements with value 100
    cout << "After resize: ";
    for (int n : nums) cout << n << " ";
    cout << "\n";

    // Remove last element
    nums.pop_back();
    cout << "After pop_back: ";
    for (int n : nums) cout << n << " ";
    cout << "\n";

    // Clear all elements
    nums.clear();
    cout << "After clear, size: " << nums.size() << "\n";

    return 0;
}

