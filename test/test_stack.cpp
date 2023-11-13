#include "stack.h"

#include <gtest.h>

TEST(TStack, can_create_TStack) {
    ASSERT_NO_THROW(TStack<int> stack);
}

TEST(TStack, can_create_TStack_with_positiv_len) {
    ASSERT_NO_THROW(TStack<int> stack(12));
}

TEST(TStack, can_create_TStack_with_negativ_len) {
    ASSERT_ANY_THROW(TStack<int> stack(-12));
}

TEST(TStack, test_isEmpty_1) {
    TStack<int> stack;
    ASSERT_EQ(true, stack.isEmpty());
}
TEST(TStack, top_on_empty_stack) {
    TStack<int> stack;
    ASSERT_ANY_THROW(stack.top());
}
TEST(TStack, test_push) {
    TStack<int> stack;
    int a = 1;
    stack.push(a);
    int e= stack.top();
    ASSERT_EQ(a, e);
}
TEST(TStack, test_push_with_litle_stack) {
    TStack <int> stack(2);
    stack.push(0);
    stack.push(1);
    int a = 2;
    stack.push(a);
    int b = stack.top();
    ASSERT_EQ(a, b);

}



