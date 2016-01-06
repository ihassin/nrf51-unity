#include "util.h"
#include "tests.h"

int main(void)
{

    SetupTests();

    RUN_TEST(test_1);
    RUN_TEST(test_2);

    TeardownTests();
}
