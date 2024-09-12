#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title){
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
    std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName()const{
    return _name;
}

std::string const &Warlock::getTitle()const{
    return _title;
}

void Warlock::setTitle(std::string const &str){
    _title = str;
}

void Warlock::introduce() const{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl; 
}

void Warlock::learnSpell(ASpell* spell){
    spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName){
    spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget const &target){
    if (spellBook.createSpell(spellName)){
        spellBook.createSpell(spellName)->launch(target);
    }
}