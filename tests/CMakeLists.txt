add_executable(test_bitops test_bitops.c)
target_link_libraries(test_bitops bitops)

add_test(NAME bitops_test COMMAND test_bitops)