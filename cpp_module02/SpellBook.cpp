#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

SpellBook::SpellBook(SpellBook const &copy){
    *this = copy;
}

SpellBook &SpellBook::operator=(SpellBook const &copy){
    _spellBook = copy._spellBook;
    return (*this);
}

void SpellBook::learnSpell(ASpell* spell){
    if (_spellBook.find(spell->getName()) == _spellBook.end()){
        _spellBook[spell->getName()] = spell->clone();
    }
}

void SpellBook::forgetSpell(std::string const &spellName){
    if (_spellBook.find(spellName) != _spellBook.end()){
        _spellBook.erase(_spellBook.find(spellName));
    }
}

ASpell* SpellBook::createSpell(std::string const &spellName){
   ASpell* tmp = NULL;
   if (_spellBook.find(spellName) != _spellBook.end()){
        tmp = _spellBook[spellName];
   }
   return tmp;
}