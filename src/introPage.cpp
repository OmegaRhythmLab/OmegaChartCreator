#include "./include/common.h"
#include "./include/nanogui/nanogui.h"

class introPage : public nanogui::Screen {
public:
    introPage() : nanogui::Screen(Eigen::Vector2i(1024, 768), "NanoGUI Test"){}; 

};
