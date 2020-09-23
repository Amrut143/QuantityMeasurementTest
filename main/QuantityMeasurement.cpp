#include "QuantityMeasurement.h"
#include <typeinfo>

QuantityMeasurement::QuantityMeasurement(Unit unit, double value) {
    this->value = value;
    this->unit = unit;
}

bool QuantityMeasurement::compare(QuantityMeasurement that) {
    double first_value = unit.get_base_value((this->value));
    double second_value = that.unit.get_base_value(that.value);
    return (first_value == second_value);
}

double QuantityMeasurement::add(QuantityMeasurement that) {
    double first_value = unit.get_base_value((this->value));
    double second_value = unit.get_base_value(that.value);
    return (first_value + second_value);
}

bool QuantityMeasurement::operator==(QuantityMeasurement other) const {
    if((this->value == other.value &&
            typeid(this->value).name() == typeid(other.value).name())) {
                return true;
    }
    return false;
}

bool QuantityMeasurement::operator==(QuantityMeasurement *other) const {
    if (other == nullptr) {
        return false;
    }
    return (this->value == other->value);
}