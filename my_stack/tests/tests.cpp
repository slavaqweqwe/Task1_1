// my_sin.cpp: определяет точку входа для приложения.
//

#include <gtest/gtest.h>
#include "stack.h"


TEST(stack_lib_test, return_size)
{
    testspace::Stack stack(3);
    int from_lib = stack.Size();

    ASSERT_EQ(from_lib, 3);
    //ASSERT_NEAR(3, 3, 0.0001);
}
TEST(stack_lib_test, treturn_head_value)
{
    testspace::Stack stack(3);
    stack.Push(11);
    int* head = stack.Front();
    ASSERT_EQ(*head, 11);
}

TEST(stack_lib_test, Push_Push_Pop_test)
{
    testspace::Stack stack(3);
    stack.Push(1);
    stack.Push(2);
    stack.Pop();
    int* head = stack.Front();
    ASSERT_EQ(*head, 1);
}
TEST(stack_lib_test, test_for_no_err)
{
    testspace::Stack stack(3);
    stack.Push(1);
    stack.Push(2);
    int err_flag = stack.Push(3);
    ASSERT_EQ(err_flag, 0);
}
TEST(stack_lib_test, test_for_err)
{
    testspace::Stack stack(2);
    stack.Push(1);
    stack.Push(2);
    int err_flag=stack.Push(3);
    ASSERT_EQ(err_flag, 1);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}