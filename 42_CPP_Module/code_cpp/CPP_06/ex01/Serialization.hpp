#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <stdint.h>

struct Data
{
	int _val;
};

class Serialization
{
	public:
		Serialization();
		~Serialization();
		Serialization(Serialization& copy);
		Serialization& operator = (const Serialization& serialization);

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};

#endif