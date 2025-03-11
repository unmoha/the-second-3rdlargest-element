#include <iostream>

int main() {
    int n, max_element = 0, second_max = 0, third_max = 0;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int elem;
        std::cin >> elem;
        if (i == 0) {
            max_element = elem;
            second_max = elem;
        } else if (elem > max_element) {
            third_max = second_max;
            second_max = max_element;
            max_element = elem;
        } else if (i == 1 || elem > second_max) {
            third_max = second_max;
            second_max = elem;
        } else if (i > 1 && elem > third_max) {
            third_max = elem;
        }
    }

    std::cout << "The second largest element is: " << second_max << "\nThe third largest element is: " << third_max;

    return 0;
}