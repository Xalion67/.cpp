#include <iostream>
#include <vector>


bool binary_search(std::vector<int> mass, int value) {
    double size = mass.size();
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
   
        if (value == mass[mid]) {
            return true;
        } else if (value > mass[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;
}
