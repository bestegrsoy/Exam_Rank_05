#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){}

TargetGenerator::TargetGenerator(TargetGenerator const &copy){
    *this = copy;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &copy){
    _target = copy._target;
    return (*this);
}

void TargetGenerator::learnTargetType(ATarget* target){
    if (_target.find(target->getType()) == _target.end()){
        _target[target->getType()] = target->clone();
    }
}

void TargetGenerator::forgetTargetType(std::string const &target){
    if (_target.find(target) != _target.end()){
        _target.erase(_target.find(target));
    }
}

ATarget* TargetGenerator::createTarget(std::string const &target){
    ATarget* tmp = NULL;
    if (_target.find(target) != _target.end()){
        tmp = _target[target];
    }
    return tmp;
}