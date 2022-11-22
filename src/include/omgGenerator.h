#ifndef OMGGENERATOR_H
#define OMGGENERATOR_H

#include "common.h"
#include <vector>
#include <filesystem>
#include <fstream>

namespace omg {
	class Generator {
	public:
		Generator();
		~Generator();

		int generate(std::vector<std::string> args);
	};

}
#endif // OMGGENERATOR_H
