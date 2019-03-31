project("msg")

enable_testing()

add_executable(msg main.cpp)

add_test(msgTest1 msg hi Anna "Hello Anna!!!")
add_test(msgTest2 msg hi Anna "Hello Anna!!")
