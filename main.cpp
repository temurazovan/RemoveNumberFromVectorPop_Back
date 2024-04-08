#include <iostream>
#include <vector>

int main() {
    std::vector<int> vector;
    int size;
    int numbers;
    int numberToDelete;

    std::cout << "Input vector size: ";
    std::cin >> size;
    vector.resize(size);

    std::cout << "Input numbers: ";
    for (int i = 0; i < size; i++) {
        std::cin >> numbers;
        vector[i] = numbers;
    }

    std::cout << "Input number to delete: ";
    std::cin >> numberToDelete;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (vector[j] == numberToDelete) {
                std::swap(vector[j], vector[j + 1]);
            }
        }
    }

    while (vector.back() == numberToDelete) {
        vector.pop_back();
    }

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }

}
