//
//  main.cpp
//  24
//
//  Created by Парфенов Константин on 25.01.2018.
//  Copyright © 2018 Парфенов Константин. All rights reserved.
//

#include <stdio.h>
#include <curses.h>

unsigned short x = 1; /* 0x0001 */

int main(void) {
    printf("%s\n", *((unsigned char *) &x) == 0 ? "Your system: big-endian" : "Your system: little-endian");
    return 0;
}
