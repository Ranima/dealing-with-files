#include <fstream>
#include <iostream>
#include <string>

void main()
{
	std::fstream file;

	file << "MyLog" << std::ios_base::out;
	file.open("MyLog.txt", std::ios_base::in);
	if (file.is_open())
	{
		std::string temp;
		getline(file, temp);
		std::cout << temp << std::endl;
	}
	system("pause");
	file.close();

	file.open("dino.dat", std::ios_base::app);
	if (file.is_open())
	{
		file << "wpoo!" << std::endl;
	}
	file.close();
	system("pause");
}