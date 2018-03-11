//
//  genericPasscode.cpp
//  code
//
//  Created by Парфенов Константин on 03.01.2018.
//  Copyright © 2018 Парфенов Константин. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>

std::vector<char> generatePass(unsigned short passLength) {
    
    srand(time(NULL));
    
    char generatedSymbol = 0;
    std::vector<char> pass(passLength);
    
    for (short i = 0; i < passLength; i++) {
        generatedSymbol = 65 + rand() % 25;
        pass[i] = generatedSymbol;
    }
  
    std::ofstream fout("Your full address to file");
    
    for (short i = 0; i < passLength; i++) {
        fout << pass[i];
    }
    
    fout.close();
    return pass;
}
