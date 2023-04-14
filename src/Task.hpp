#pragma once

#include <string>

typedef uint16_t idx_t;
typedef int type_t;

enum Types {
    SINGLE,
    WEEKLY,
};

class Task {
public: 
    Task();
    ~Task() = default;

    idx_t getID();
    std::string getName();
    type_t getType();
private:
    idx_t mID;
    std::string mName;
    type_t mType;
    
};