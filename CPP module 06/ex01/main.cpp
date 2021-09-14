#include "Serialize.hpp"

int main()
{
    Data* data = new Data();
    data->param = 30;
    std::cout << "Data: " << data;
    std::cout << " param:" << data->param << std::endl;

    uintptr_t raw = serialize(data);
    std::cout << "Serialize: " << raw << std::endl;

    Data* value;
    value = deserialize(raw);
    std::cout << "Deserialize: " << value;
    std::cout << " param:" << value->param << std::endl;

    delete data;

    return 0;
}