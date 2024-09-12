#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
class ASpell;

class Warlock{
    private:
        std::string _name;
        std::string _title;
        std::map<std::string, ASpell*> _SpellBook;
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