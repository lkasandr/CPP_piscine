#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <cstdint>
#include <iostream>

struct Data
{
    int param;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif