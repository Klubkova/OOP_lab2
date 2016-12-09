//
//  RhombusArray.hpp
//  second part
//
//  Created by Ольга Клубкова on 08.12.16.
//  Copyright © 2016 Ольга Клубкова. All rights reserved.
//

#ifndef TRAPEZEARRAY_HPP
#define TRAPEZEARRAY_HPP

#include "Trapeze.hpp"

const int size = 10;

class TrapezeArray
{
public:
    TrapezeArray();
    
    void Insert(Trapeze &trapeze, int index);
    Trapeze Get(int index);
    void Delete(int index);
    friend std::ostream& operator << (std::ostream &os, const TrapezeArray &array);
    
    virtual ~TrapezeArray();
    
private:
    Trapeze a[size];
    
};

#endif
