#ifndef SCREEN_H
#define SCREEN_H

#include <string>

class Screen
{
public:
    // typedef string::size_type pos;
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd),
        contents(ht * wd, c){}

    char get() const {return contents[cursor];}
    inline char get(pos ht, pos wd) const;

private:
    pos cursor = 0; // 光标的位置
    pos height = 0, width = 0; // 屏幕的高和宽
    string contents;
};
#endif // SCREEN_H