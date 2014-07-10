/**
 *  fastcall.h
 *
 *  This file holds some PHP functions implementation in C directly.
 *
 */

namespace Php {

    Value eval(const std::string &phpCode);
    bool class_exists(const std::string &classname, bool autoload = true);

}

