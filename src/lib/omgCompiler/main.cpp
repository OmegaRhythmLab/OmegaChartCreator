#include "omgGenerator.h"
#include "omgTranslator.h"
#include "omgcPacker.h"

#include <vector>
#include <iostream>

int main(int argc, char* argv[]){
	// parse arguments to vector
	std::vector<std::string> args;
	for (int i = 1; i < argc; i++){
		args.push_back(argv[i]);
	}

	if (args.size() == 0){
		std::cout << "No arguments provided" << std::endl;
		return 1;
	}

	if(args[0] == "generate"){
		omg::Generator generator;
		return generator.generate(args);
	}


	return 0;
}
