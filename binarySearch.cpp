//
//  binarySearch.cpp
//  code
//
//  Created by Xalion on 03.01.2018.
//  Copyright © 2018 Xalion. All rights reserved.
//  Contact https://t.me/xalion
//

#include <iostream>
#include <vector>

bool binarySearch(std::vector<int> mass, int value) {
    double size = mass.size();
    int low = 0;
    int high = size - 1;
    int count = 0;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (value == mass[mid]) {
            count += 1;
            std::cout << "Number " << value << " searched with " << count << " try\n";
            return 1;
        } else if (value > mass[mid]) {
            count += 1;
            low = mid + 1;
        } else {
            count += 1;
            high = mid - 1;
        }
    }
    std::cout << "Number " << value << " not found in vector\n";
    return 0;
}
