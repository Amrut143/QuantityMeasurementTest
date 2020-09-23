#pragma once
#include "TypesOfUnit.h"

class Unit {

    double base_conversion_factor;
    TypesOfUnit types_of_unit;

    // Unit();
    Unit(double, TypesOfUnit);
    
    public:
        static Unit INCH;
        static Unit FEET;
        static Unit YARD;
        static Unit CM;

        double get_base_value(double);
}; 