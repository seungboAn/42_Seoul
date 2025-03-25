#include "Serialization.hpp"

Serialization::Serialization()
	{}

Serialization::~Serialization()
	{}

Serialization::Serialization(Serialization& copy)
{
	*this = copy;
}

Serialization& Serialization::operator = (const Serialization& serialization)
{
	if (this == &serialization)
		return (*this);
	return (*this);
}

uintptr_t Serialization::serialize(Data* ptr)
{
    uintptr_t d_ptr = reinterpret_cast<uintptr_t>(ptr);
    return d_ptr;
}

Data* Serialization::deserialize(uintptr_t raw)
{
    Data *d_ptr = reinterpret_cast<Data *>(raw);
    return d_ptr;
}