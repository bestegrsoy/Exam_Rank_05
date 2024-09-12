#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>
class ATarget;

class TargetGenerator{
    private:
        std::map<std::string, ATarget*> _target;
        TargetGenerator(TargetGenerator const &copy);
        TargetGenerator &operator=(TargetGenerator const &copy);
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget* target);
        void forgetTargetType(std::string const &target);
        ATarget* createTarget(std::string const &target);
};