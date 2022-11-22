#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace fs = std::filesystem;

int main(int argc, char *argv[])
{
	std::vector<std::string> args(&argv[1], argv + argc);
	if (args.size() == 0) {
		std::cout
			<< "Usage: \n\tocc-register compiler <PATH to executable> <PATH "
			   "to COMPILER-EXECUTABLE-NAME.toml>"
			<< std::endl;
		return 1;
	}

	if (!fs::exists("./3rdparty")) {
		fs::create_directory("./3rdparty");
	}

	if (args[0] == "compiler") {
		if (!fs::exists("./3rdparty/compiler")) {
			fs::create_directory("./3rdparty/compiler");
		}
		if (!fs::exists("./3rdparty/compiler/bin")) {
			fs::create_directory("./3rdparty/compiler/bin");
		}

		if (args.size() != 3) {
			std::cout
				<< "Usage: \n\tocc-register compiler <PATH to executable> <PATH to COMPILER-EXECUTABLE-NAME.toml>"
				<< std::endl;
			return 1;
		}

		fs::copy_file(args[1], "./3rdparty/compiler/bin/" + fs::path(args[1]).filename().string(), fs::copy_options::overwrite_existing);
		fs::copy_file(args[2], "./3rdparty/compiler/" + fs::path(args[2]).filename().string(), fs::copy_options::overwrite_existing);
	}

	return 0;
}
