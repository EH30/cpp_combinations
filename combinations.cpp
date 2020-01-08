#include <iostream>
#include <string>


const char letters[26] = 
{
	'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u', 
	'v', 'w', 'x', 'y', 'z' 
};

void genrates(unsigned int e, std::string strs)
{
	if (strs.length() == e)
	{
		std::cout << strs << std::endl;
		return;
	}else{
		for (unsigned int x= 0; x < sizeof(letters); x++)
		{
			std::string oldstrs= strs + letters[x];
			genrates(e, oldstrs);
		}
	}
}


int main(int argc, char *argv[])
{
	unsigned int lengths;
	std::cout << "Enter a length: ";
	std::cin >> lengths;
	genrates(lengths, "");
	return 0;
}