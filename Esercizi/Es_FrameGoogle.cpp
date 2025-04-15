#include <gtest/gtest.h>

extern "C" {
#include "Somma.h"
}

    TEST(SommaTest, PositiveNumbers) {
        EXPECT_EQ(somma(2, 3), 5);
        EXPECT_EQ(somma(10, 20), 30);
    }

    



