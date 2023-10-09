#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void ReadFileToVec(const std::string &file, std::vector<std::string> &svec) {
	std::ifstream ifs(file);
	if (ifs) {
		std::string buff;
		while (std::getline(ifs, buff))
			svec.push_back(buff);
	} else
		std::cout << "Can't open file: " << file << std::endl;
}

int main(int argc, char **argv) {
	if (argc == 2) {
		std::vector<std::string> svec;
		ReadFileToVec(argv[1], svec);
		for (const auto &e : svec)
			std::cout << e << std::endl;
	} else
		std::cout << "Wrong parameters!" << std::endl;
	
	return 0;
}
