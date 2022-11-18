#ifndef OCC_PROJECT_H
#define OCC_PROJECT_H

#include <common.h>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <toml++/toml.h>

namespace occ {
	class OCCEXPORT Project {
		public:
			Project();
			~Project();
	};

}

#endif
