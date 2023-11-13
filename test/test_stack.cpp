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
/*TEST(TStack, test_push) {
    TStack<int> stack;
    stack.push(1);
    ASSERT_EQ(1, stack.top());
}*/




