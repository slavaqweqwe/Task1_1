# задаем набор исходников
set(SOURCES
    tests.cpp
)

# создаем исполняемый файл
add_executable(stack_test ${SOURCES})

# подключаем библиотеки:
# 1. Тестируемая библиотека
# 2. gest
target_link_libraries(stack_test PUBLIC stack_lib)
target_link_libraries(stack_test PUBLIC gtest_main)

# В solution эта библиотека лежит в tests/sqlib_test
set_property(TARGET stack_test PROPERTY FOLDER "tests/stack_test")