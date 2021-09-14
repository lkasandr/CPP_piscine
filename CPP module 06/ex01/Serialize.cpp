#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t value;
    value = reinterpret_cast < uintptr_t > (ptr);
    return value;
}

Data* deserialize(uintptr_t raw)
{
    Data *value;
    value = reinterpret_cast < Data* > (raw);
    return value;
}

//про reinterpret_cast:
//Позволяет преобразовывать любой указатель в указатель любого другого типа. 
//Также позволяет преобразовывать любой целочисленный тип в любой тип указателя и наоборот.
//reinterpret_cast < type-id > ( expression )