/**
 *  fastcall.h
 *
 *  This file holds some PHP functions implementation in C directly.
 *
 */

namespace Php {

    Value eval(const std::string &phpCode);
    bool class_exists(const std::string &classname, bool autoload = true);
    inline bool is_a(const Value &obj, const std::string classname, bool allow_string = false) {
        return obj.is(classname, allow_string);
    }
    inline bool is_subclass_of(const Value &obj, const std::string classname, bool allow_string = true) {
        return obj.isSubClassOf(classname, allow_string);
    }

    /**
     * Get the value of a constant
     *  @param  constant_name
     *  @return value
     */
    Php::Value constant(const std::string &constant_name);
    /**
     * Define a new constant
     *  @param  constant_name
     *  @param  value
     *  @param  case_insensitive
     *  @return bool
     */
    bool define(const std::string &constant_name, const Php::Value &value, bool case_insensitive = false);
    /**
     * Check whether a constant exists
     *  @param  constant_name
     *  @return bool
     */
    bool defined(const std::string &constant_name);
}

