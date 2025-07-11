# IF(BUILD_TESTING)
#     ADD_EXECUTABLE(scheduler_test main.cpp)
#
#     TARGET_INCLUDE_DIRECTORIES(scheduler_test PRIVATE
#         ${PROJECT_SOURCE_DIR}/fiber_lib
#     )
#
#     SET_TARGET_PROPERTIES(scheduler_test PROPERTIES
#         RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#     )
#
#     #链接到测试的库
#     TARGET_LINK_LIBRARIES(scheduler_test PRIVATE fiber_shared)
#
#     #注册测试
#     ADD_TEST(NAME SchedulerUnitTest COMMAND scheduler_test)
# ENDIF()
#
IF(BUILD_TESTING)
    SET(CMAKE_BUILD_TYPE Debug)

    SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

    ADD_EXECUTABLE(hook_test main.cpp)


    TARGET_INCLUDE_DIRECTORIES(hook_test PRIVATE
        ${PROJECT_SOURCE_DIR}/fiber_lib
    )

    SET_TARGET_PROPERTIES(hook_test PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )

    #链接到测试的库
    TARGET_LINK_LIBRARIES(hook_test PRIVATE fiber_shared)

    #注册测试
    ADD_TEST(NAME HookUnitTest COMMAND hook_test)
ENDIF()
