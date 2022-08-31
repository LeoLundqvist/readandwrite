#include <iostream>
#include <fstream>
#include <string>

namespace Lib 
{
	template <typename T>
	void Print(T t)
	{
		std::cout << t << "\n";
	}
	
	void WriteToFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		//tar vad du skriver med mellanslag
		std::getline(std::cin, fileContent);
		//sätter över fileContent i file
		file << fileContent;
		file.close();
	}

	std::string filePath1 = "minifil.txt";

}



int main() 
{
	Lib::Print(123);
	Lib::WriteToFile(Lib::filePath1);


}