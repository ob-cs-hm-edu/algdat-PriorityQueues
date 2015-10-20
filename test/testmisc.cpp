#include "testmisc.h"

TEST(MiscTest, MiscTest_GimmeReturnsName_Test) {
    ASSERT_EQ("Priority Queues", gimmeName());
}
