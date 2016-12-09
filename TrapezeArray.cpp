//
//  RhombusArray.cpp
//  second part
//
//  Created by Ольга Клубкова on 08.12.16.
//  Copyright © 2016 Ольга Клубкова. All rights reserved.
//

#include "TrapezeArray.hpp"

TrapezeArray::TrapezeArray()
{
    for (int i = 0; i < size; i++)
    {
        this->a[i] = Trapeze::Trapeze();
    }
}

void TrapezeArray::Insert(Trapeze &trapeze, int index)
{
    this->a[index] = trapeze;
}

Trapeze TrapezeArray::Get(int index)
{
    return this->a[index];
}

void TrapezeArray::Delete(int index)
{
    this->a[index] = Trapeze::Trapeze();
}

std::ostream& operator << (std::ostream &os, const TrapezeArray &array)
{
    for (int i = 0; i < size; i++)
    {
        os << array.a[i] << std::endl;
    }
    return os;
}

TrapezeArray::~TrapezeArray()
{
    for (int i = 0; i < size; i++)
    {
        this->a[i] = Trapeze::Trapeze();
        
    }
}
