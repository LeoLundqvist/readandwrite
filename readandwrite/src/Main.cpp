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

	void ReadFromFile()
	{
		std::string fileContent;
		std::ifstream openFile("minfil.txt");
		while(std::getline(openFile, fileContent))
		{
			std::cout << "Reading Filecontent... " << fileContent << "\n";
		}
		openFile.close();
	}


}



int main() 
{
	Lib::Print(123);
	Lib::WriteToFile("minfil.txt");
	Lib::ReadFromFile();


}