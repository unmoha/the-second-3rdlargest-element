#include <iostream>
#include <vector>
#include <limits>
using namespace std;

// Function to find the second and third largest elements
void findSecondAndThirdLargest(const vector<int>& arr, int& secondLargest, int& thirdLargest) {
    if (arr.size() < 3) {
        cout << "Array must have at least 3 elements.\n";
        secondLargest = thirdLargest = numeric_limits<int>::min();
        return;
    }

    int first = numeric_limits<int>::min();
    secondLargest = numeric_limits<int>::min();
    thirdLargest = numeric_limits<int>::min();

    for (int num : arr) {
        if (num > first) {
            thirdLargest = secondLargest;
            secondLargest = first;
            first = num;
        } else if (num > secondLargest && num != first) {
            thirdLargest = secondLargest;
            secondLargest = num;
        } else if (num > thirdLargest && num != secondLargest && num != first) {
            thirdLargest = num;
        }
    }
}

int main() {
    vector<int> arr = {10, 45, 67, 89, 34, 67, 89, 90};

    int second, third;
    findSecondAndThirdLargest(arr, second, third);

    if (second != numeric_limits<int>::min())
        cout << "Second largest: " << second << endl;
    if (third != numeric_limits<int>::min())
        cout << "Third largest: " << third << endl;

    return 0;
}
