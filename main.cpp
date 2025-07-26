#include <iostream>
#include <fstream>
#include <string>

void song()
{
	for (int i = 99; i >= 0; i--)
	{
		if (i == 0)
		{
			std::cout << "No more bottles of beer on the wall, no more bottles of beer." << std::endl;
			std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << std::endl;
		}
		else if (i == 1)
		{
			std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << std::endl;
			std::cout << "Take one down and pass it around, no more bottles of beer on the wall."
								<< std::endl;
			std::cout << std::endl;
		}
		else
		{
			std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << std::endl;
			std::cout << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall." << std::endl;
			std::cout << std::endl;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " file.hq" << std::endl;
		return 1;
	}
	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cerr << "Cannot open file: " << argv[1] << std::endl;
		return 1;
	}
	std::string code, line;
	while (std::getline(file, line))
	{
		code += line;
	}
	int code_size = code.size();
	unsigned int accumulator = 0;
	for (int i = 0; i < code_size; i++)
	{
		if (code[i] == 'h' || code[i] == 'H')
		{
			std::cout << "Hello, world!" << std::endl;
		}
		if (code[i] == 'q' || code[i] == 'Q')
		{
			std::cout << code << std::endl;
		}
		if (code[i] == '9')
		{
			song();
		}
		if (code[i] == '+')
		{
			accumulator++;
		}
	}
	return 0;
}
