module;

#include <iostream>

export module better_maths:helper;

export int check(int value) {
    if (value == 0){
        std::cerr << "Błąd: dzielenie przez zero!" << std::endl;
        return 1;
    }
    return value;
}