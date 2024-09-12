#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"
class ASpell;

class Warlock{
    private:
        std::string _name;
        std::string _title;
        SpellBook spellBook;
    public:
        Warlock();
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        std::string const &getName()const;
        std::string const &getTitle()const;
        void setTitle(std::string const &str);
        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, ATarget const &target);

};