#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string const &name, std::string const &effects) : _name(name), _effects(effects){
}

ASpell::~ASpell(){}

std::string ASpell::getName()const{
    return _name;
}

std::string ASpell::getEffects()const{
    return _effects;
}

void ASpell::launch(const ATarget &target){
    target.getHitBySpell(*this);
}