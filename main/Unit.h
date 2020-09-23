#pragma once
#include "QuantityMeasurement.h"
#include "TypesOfUnit.h"

class Unit {

    double base_conversion_factor;
    TypesOfUnit types_of_unit;

    Unit();
    Unit(double base_conversion_factor, TypesOfUnit types_of_unit);
    
    public:
        static Unit INCH;
        static Unit FEET;
        static Unit YARD;
        static Unit CM;

        double get_base_value(QuantityMeasurement quantity);
}; 