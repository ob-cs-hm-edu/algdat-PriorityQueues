file(GLOB SRCS *.cpp)

add_executable(testmisc ${SRCS})

target_link_libraries(testmisc
        pqueues
        gtest
)

include_directories("..")

install(TARGETS testmisc DESTINATION bin)