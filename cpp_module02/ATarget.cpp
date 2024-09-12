#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(std::string const &type) : _type(type){}

ATarget::~ATarget(){}

std::string const &ATarget::getType()const{
    return _type;
}

void ATarget::getHitBySpell(const ASpell &str)const{
    std::cout << _type << " has been " << str.getEffects() << "!" << std::endl;
}