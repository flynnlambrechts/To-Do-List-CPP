#include "Task.hpp"

Task::Task()
    : mID {1}
    , mName {"Test"}
    , mType {Types::SINGLE} {
    
}

idx_t Task::getID() {return mID;}

std::string Task::getName() {return mName;}

type_t Task::getType() {return mType;}
