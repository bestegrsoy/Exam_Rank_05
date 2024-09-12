#pragma once

#include <iostream>

class Warlock{
    private:
        std::string _name;
        std::string _title;
    public:
        Warlock();
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        std::string const &getName()const;
        std::string const &getTitle()const;
        void setTitle(std::string const &str);
        void introduce() const;

};