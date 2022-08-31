#include <iostream>
#include <fstream>
#include <string>

namespace Lib 
{	
	//Template print function
	template <typename T>
	void Print(T t)
	{
		std::cout << t << "\n";
	}

	//Writes to textfile
	void WriteToFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		//tar vad du skriver med mellanslag
		std::getline(std::cin, fileContent);
		//s�tter �ver fileContent i file
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