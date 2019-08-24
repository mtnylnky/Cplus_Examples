//filesystem usage in c++17
//listing the same ones as file extensions
#include <iostream>
#include <filesystem>
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;

int main()
{
	std::string loc, file;
	std::cout << "File location: ";
	std::cin >> loc;
	std::cout << "File extention: ";
	std::cin >> file;
	std::string path(loc);
	std::string ext("."+file);
	for (auto& p : fs::recursive_directory_iterator(path))//if you don't want a deep scan "recursive_directory_iterator" replace "directory_iterator"
	{
		if (p.path().extension() == ext)
			std::cout << p << '\n';
	}
	system("Pause");
}
