#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <vector>

class Screen;

class Window_mgr {

    public:
        using ScreenIndex = std::vector<Screen>::size_type;
        void clear(ScreenIndex i);
        Window_mgr() = default;

    private:
        std::vector<Screen> screens;
};


#endif
