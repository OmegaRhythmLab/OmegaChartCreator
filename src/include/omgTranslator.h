#ifndef OMG_TRANSLATOR_H
#define OMG_TRANSLATOR_H

#include "common.h"
#include <nlohmann/json.hpp>
#include <string>

#define OMG_TRANSLATOR_VERSION "0.1.0"

#define OMG_START 0x00
#define OMG_ACTIVATE 0x01
#define OMG_NOTE_MOVEMENT_HORIZONTAL_LINEAR 0x02
#define OMG_NOTE_MOVEMENT_HORIZONTAL_SINE 0x03
#define OMG_LINE_ALPHA_LINEAR 0x11
#define OMG_LINE_ALPHA_SINE 0x12
#define OMG_LINE_MOVEMENT_LINEAR 0x13
#define OMG_LINE_MOVEMENT_SINE 0x14

namespace omg{
	class Translator{
	public:
		Translator(std::string input);
		~Translator();
	};
	
}

#endif // OMG_TRANSLATOR_H
