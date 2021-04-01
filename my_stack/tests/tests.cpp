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
    stack.Push("aaa");
    string head = stack.Front();
    ASSERT_EQ(head, "aaa");
}

TEST(stack_lib_test, Push_Push_Pop_test)
{
    testspace::Stack stack(3);
    stack.Push("aaa");
    stack.Push("bbb");
    stack.Pop();
    string head = stack.Front();
    ASSERT_EQ(head, "aaa");
}

TEST(stack_lib_test, test_for_err1)
{
    testspace::Stack stack(2);
    stack.Push("aaa");
    stack.Push("bbb");
    stack.Push("ccc");
    string head = stack.Front();
    ASSERT_EQ(head, "bbb");
}
TEST(stack_lib_test, test_for_err2)
{
    testspace::Stack stack(2);
    stack.Pop();
    int num_elements = stack.ContainedNumber();
    ASSERT_EQ(num_elements, 0);
}
TEST(stack_lib_test, test_for_err3)
{
    testspace::Stack stack(2);
    string head = stack.Front();
    ASSERT_EQ(head, "stack is void");
}
int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}