#include "Serialization.hpp"

int main()
{
    Serialization s;

    Data *d = new Data;
	d->_val = 42;
	Data *deserializePtr = NULL;
	uintptr_t uptr; // 포인터의 주소를 저장하기 위해 사용

	std::cout << " [ TEST Serialization ] " << std::endl;
    uptr = s.serialize(d);
	std::cout << "d ptr: " << d << std::endl;
	std::cout << "d value: " << d->_val << std::endl;
	std::cout << std::endl;
	std::cout << "uptr address use serialize: " << uptr << std::endl;
	std::cout << std::endl;

    std::cout << " [ TEST Deserialization ] " << std::endl;
	deserializePtr = s.deserialize(uptr);
	std::cout << "deserializePtr: " << deserializePtr << std::endl;
	std::cout << "deserializePtr value: " << deserializePtr->_val << std::endl;
	std::cout << std::endl;
	
	delete deserializePtr;
	d = NULL;
	deserializePtr = NULL;
	system("leaks a.out");
	return (0);
}