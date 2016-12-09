//
//  Rhombus.hpp
//  second part
//
//  Created by Ольга Клубкова on 08.12.16.
//  Copyright © 2016 Ольга Клубкова. All rights reserved.
//


#ifndef TRAPEZE_HPP
#define TRAPEZE_HPP
#include <cstdlib>
#include <iostream>

class Trapeze
{
public:
    Trapeze();
    Trapeze(float, float, float);
    Trapeze(const Trapeze &original);
    
    float Square();
    
    Trapeze& operator = (const Trapeze &rhs);
    bool operator == (const Trapeze &rhs);
    
    friend std::ostream& operator << (std::ostream &os, const Trapeze &object);
    friend std::istream& operator >> (std::istream &is, Trapeze &object);
    
    virtual ~Trapeze();
    
private:
    
    float base_1;
    float base_2;
    float height;
};

#endif 
