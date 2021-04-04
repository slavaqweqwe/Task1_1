
#include <gtest/gtest.h>
#include "stack.h"


TEST(stack_lib_test, return_size)
{
    testspace::Stack stack(3);
    size_t from_lib = stack.Size();

    ASSERT_EQ(from_lib, 3);
}
TEST(stack_lib_test, treturn_head_value)
{
    testspace::Stack stack(3);
    stack.Push("aaa");
    string* head = stack.Front();
    ASSERT_EQ(*head, "aaa");
}

TEST(stack_lib_test, Push_Push_Pop_test)
{
    testspace::Stack stack(3);
    stack.Push("aaa");
    stack.Push("bbb");
    stack.Pop();
    string* head = stack.Front();
    ASSERT_EQ(*head, "aaa");
}

TEST(stack_lib_test, test_for_err1)
{
    testspace::Stack stack(2);
    stack.Push("aaa");
    stack.Push("bbb");
    
    try
    {
        stack.Push("ccc");

    }
    catch (exception &e)
    {

        ASSERT_STREQ(e.what(), "Stack is full");
    }

    
}
TEST(stack_lib_test, test_for_err2)
{
    testspace::Stack stack(2);


    try
    {
        stack.Pop();

    }
    catch (exception& e)
    {

        ASSERT_STREQ(e.what(), "Stack is empty");
    }


}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}