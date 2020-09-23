#include "Unit.h"

Unit::Unit() : base_conversion_factor(1), types_of_unit(LENGTH) {
    
}

Unit::Unit(double base_conversion_factor, TypesOfUnit types_of_unit) {
    this->base_conversion_factor = base_conversion_factor;
    this->types_of_unit = types_of_unit;
}

Unit Unit::INCH(1, TypesOfUnit::LENGTH);
Unit Unit::FEET(12, TypesOfUnit::LENGTH);
Unit Unit::YARD(36, TypesOfUnit::LENGTH);
Unit Unit::CM(0.4, TypesOfUnit::LENGTH);

double Unit::get_base_value(double value) {
    return (base_conversion_factor * value);
}
