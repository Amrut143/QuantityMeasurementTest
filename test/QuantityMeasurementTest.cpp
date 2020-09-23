#include "../main/QuantityMeasurement.h"
#include <gtest/gtest.h>


TEST(QuantityMeasurementTest, _zero_feet_and_zero_feet_should_be_equal) {
    QuantityMeasurement first_zero_feet(&Unit::FEET, 0);
    QuantityMeasurement second_zero_feet(&Unit::FEET, 0);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(QuantityMeasurementTest, _null_feet_and_one_feet__should_not_be_equal) {
    QuantityMeasurement first_one_feet(&Unit::FEET, 1);
    ASSERT_FALSE(first_one_feet == nullptr);
}

TEST(QuantityMeasurementTest, _first_object_and_second_ref__should_be_equal) {
    QuantityMeasurement *first_ref = new QuantityMeasurement(&Unit::FEET, 1);
    QuantityMeasurement *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(QuantityMeasurementTest, _first_ref_and_second_ref__should_be_equal) {
    QuantityMeasurement *first_ref = new QuantityMeasurement(&Unit::FEET, 1);
    QuantityMeasurement *second_ref = new QuantityMeasurement(&Unit::FEET, 2);
    ASSERT_NE(first_ref, second_ref);
}

TEST(QuantityMeasurementTest, _one_feet_and_twelve_inch__should_be_equal) {
    QuantityMeasurement feet_value(&Unit::FEET, 1);
    QuantityMeasurement inch_value(&Unit::INCH, 12);
    ASSERT_EQ(true, feet_value.compare(inch_value));
}

TEST(LengthComparisionTest, _zero_inch_and_zero_inch_should_be_equal) {
    QuantityMeasurement first_zero_inch(&Unit::INCH, 0);
    QuantityMeasurement second_zero_inch(&Unit::INCH, 0);
    ASSERT_EQ(first_zero_inch, second_zero_inch);
}

TEST(LengthComparisionTest, _null_inch_and_one_inch__should_not_be_equal) {
    QuantityMeasurement first_one_inch(&Unit::INCH, 1);
    ASSERT_FALSE(first_one_inch == nullptr);
}

TEST(LengthComparisionTest, _first_inch_object_and_second_ref__should_be_equal) {
    QuantityMeasurement *first_ref = new QuantityMeasurement(&Unit::INCH, 1);
    QuantityMeasurement *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

// TEST(LengthComparisionTest, _first_inch_1_and_second_inch_2__should_not_equal) {
//     QuantityMeasurement first_inch(&Unit::INCH, 1);
//     QuantityMeasurement second_inch(&Unit::INCH, 2);
//     ASSERT_NE(first_inch, second_inch);
// }

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}