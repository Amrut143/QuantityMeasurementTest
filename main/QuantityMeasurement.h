#pragma once
#include "Unit.h"

class QuantityMeasurement {
public:
    double value;
    Unit* unit;

    QuantityMeasurement(Unit*, double);

    bool operator==(QuantityMeasurement) const;
    bool operator==(QuantityMeasurement *) const;
    bool compare(QuantityMeasurement);
    double add(QuantityMeasurement);
};