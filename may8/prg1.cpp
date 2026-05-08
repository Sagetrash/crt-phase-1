#include <iostream>

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 10;
    int pos = 2;

    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    size++;

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
