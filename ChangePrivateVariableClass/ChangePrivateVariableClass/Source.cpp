#include <iostream>

class cClass
{
private:
	int MagicKey;

public:
	cClass(int magickey);
	int GetMagicKey();
};

cClass::cClass(int magickey)
{
	this->MagicKey = magickey;
}

int cClass::GetMagicKey()
{
	return this->MagicKey;
}

int main()
{
	cClass myclass(512351);

	std::cout << myclass.GetMagicKey() << std::endl;

	*(int*)&myclass = -666;

	std::cout << myclass.GetMagicKey() << std::endl;

	std::cin.get();

	return EXIT_SUCCESS;
}