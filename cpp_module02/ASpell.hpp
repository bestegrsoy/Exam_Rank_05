#pragma once

#include <iostream>
#include "ATarget.hpp"
class ATarget;

class ASpell{
    protected:
        std::string _name;
        std::string _effects;
    public:
        ASpell();
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();
        std::string getName()const;
        std::string getEffects()const;
        virtual ASpell* clone()const = 0;
        void launch(const ATarget &target);
};