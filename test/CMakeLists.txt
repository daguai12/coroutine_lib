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
    ADD_EXECUTABLE(ioscheduler_test main.cpp)

    TARGET_INCLUDE_DIRECTORIES(ioscheduler_test PRIVATE
        ${PROJECT_SOURCE_DIR}/fiber_lib
    )

    SET_TARGET_PROPERTIES(ioscheduler_test PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )

    #链接到测试的库
    TARGET_LINK_LIBRARIES(ioscheduler_test PRIVATE fiber_shared)

    #注册测试
    ADD_TEST(NAME IOSchedulerUnitTest COMMAND ioscheduler_test)
ENDIF()
