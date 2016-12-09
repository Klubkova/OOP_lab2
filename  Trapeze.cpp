//
//  Rhombus.cpp
//  second part
//
//  Created by Ольга Клубкова on 08.12.16.
//  Copyright © 2016 Ольга Клубкова. All rights reserved.
//

#include "Trapeze.hpp"

Trapeze::Trapeze() : Trapeze(0,0,0)
{
}

Trapeze::Trapeze(float a, float b, float h) : base_1(a), base_2(b), height(h)
{
    std::cout << "Trapeze created: " << "baze_1=" << base_1 << ", " << "baze_2=" << base_2 << ", " << "height=" << height << std::endl;
    }

Trapeze::Trapeze(const Trapeze &original) : base_1(original.base_1), base_2(original.base_2), height(original.height)
{
    std::cout << "Trapeze copy created" << std::endl;
    
}

float Trapeze::Square()
{
    return (base_1 + base_2) / 2 * height;
}

Trapeze& Trapeze::operator = (const Trapeze &rhs)
{
    if (this == &rhs) return *this;
    
    
    base_1 = rhs.base_1;
    base_2 = rhs.base_2;
    height = rhs.height;
    std::cout << "Trapeze copied" << std::endl;
    
    return *this;
}

bool Trapeze::operator == (const Trapeze &rhs)
{
    if ((this->base_1 == rhs.base_1) && (this->base_2 == rhs.base_2) && (this->height == rhs.height)) return true;
    return false;
}

std::ostream& operator << (std::ostream &os, const Trapeze &object)
{
    os << "base_1=" << object.base_1 << " " << "base_2=" << object.base_2 << " " << "height=" << object.height << std::endl;
    return os;
}

std::istream& operator >> (std::istream &is, Trapeze &object)
{
    is >> object.base_1 >> object.base_2 >> object.height;
    return is;
}

Trapeze::~Trapeze() 
{
    std::cout << "Trapeze deleted" << std::endl;
}
