#include <fstream>
#include <iostream>
#include <string>

void main()
{
	std::fstream file;

	file.open("MyLog.txt");
	if (file.is_open())
	{
		file.close();
		file.open("data.txt", std::ios_base::out);
	}
	file.close();

	file.open("MyLog.txt", std::ios_base::app);
	if (file.is_open())
	{
		std::string temp;
		getline(std::cin, temp);
		std::cout << temp << std::endl;
	}
	file.close();

	file.open("MyLog.txt", std::ios_base::in);
	if (file.is_open())
	{
		std::string temp;
		while (std::getline(file, temp))
			file << temp << std::endl;
	}
	file.close();

	file.open("data.txt", std::ios_base::out);
	file.close();

	system("pause");
}