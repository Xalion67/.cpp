//
//  reverseString.cpp
//  code
//
//  Created by Xalion on 03.01.2018.
//  Copyright © 2018 Xalion. All rights reserved.
//  Contact https://t.me/xalion
//

#include <iostream>

std::string reverseString(std::string string) {
short temp, i, j;

    for (i = 0, j = string.length() - 1; i < j; i++, j--) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
}
    
 return string;
    
}
