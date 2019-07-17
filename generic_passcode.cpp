#include <iostream>
#include <string>
// If srand() and time() are undefined
// Uncomment the bottom two lines
//#include <cstdlib>
//#include <ctime>


std::string generate_pass(unsigned short password_length) {
    srand(time(NULL));

    std::string password;

    for (short i = 0; i < password_length; i++) {
        password += 33 + rand() % 93;
    }

    return password;
}
