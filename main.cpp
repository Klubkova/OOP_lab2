//
//  main.cpp
//  second part
//
//  Created by Ольга Клубкова on 08.12.16.
//  Copyright © 2016 Ольга Клубкова. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include "Trapeze.hpp"
#include "TrapezeArray.hpp"

int main()
{
    int x = 6;
    float a, b, h;
    int i;
    TrapezeArray trapeze_array;
    std::cout << "[1] - insert, [2] - get, [3] - delete, [4] - print, [0] - exit" << std::endl;
    while (x != 0)
    {
        std::cout << "enter command: ";
        std::cin >> x;
        if (x == 1)
        {
            std::cout << "enter a b h: ";
            std::cin >> a >> b >> h;
            std::cout << "enter index: ";
            std::cin >> i;
            Trapeze *t = new Trapeze(a, b, h);
            trapeze_array.Insert(*t, i);
        }
        else if (x == 2)
        {
            std::cout << "enter index: ";
            std::cin >> i;
            std::cout << trapeze_array.Get(i);
        }
        else if (x == 3)
        {
            std::cout << "enter index: ";
            std::cin >> i;
            trapeze_array.Delete(i);
        }
        else if (x == 4)
        {
            std::cout << "trapeze_array:\n" << trapeze_array << std::endl;
        }
    }
    return 0;
}
