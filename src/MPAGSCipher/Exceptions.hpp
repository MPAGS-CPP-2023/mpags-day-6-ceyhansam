#ifndef MPAGSCIPHER_EXCEPTIONS_HPP

#include <string>
#include <stdexcept>

class MissingArgument : public std::invalid_argument {
    public:
        MissingArgument(const std::string& msg) :
        std::invalid_argument{msg} {
        }
};

class UnknownArgument : public std::invalid_argument {
    public:
        UnknownArgument(const std::string& msg) :
        std::invalid_argument{msg} {
        }
};

class InvalidKey : public std::invalid_argument {
    public:
        InvalidKey(const std::string& msg) : 
        std::invalid_argument{msg} {
        }
};
#define MPAGSCIPHER_EXCEPTIONS_HPP
#endif