#include <iostream>

import maths;
import player;
import better_maths;
import i.like.dots;
import import_module;

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "Dodawanie: " << dodaj(3, 4) << std::endl;
    std::cout << "Mnożenie: " << pomnoz(3, 4) << std::endl;
    std::cout << "Dzielenie: " << podziel(12, 0) << std::endl;
    Player pla;
    std::cout << pla.getHealth() << std::endl;

    // Peculiar cases
    std::cout << "Kropki: " << dots() << std::endl;
    std::cout << "Import: " << import() << std::endl;
}