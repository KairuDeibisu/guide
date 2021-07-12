

set(SOURCE_FILES 
    hello_test.cc
)

enable_testing()

add_executable(
    helloworld_test    
    ${SOURCE_FILES}
)

target_link_libraries(
  helloworld_test
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(helloworld_test)