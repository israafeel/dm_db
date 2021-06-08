cmake_minimum_required(VERSION 3.17)
project(dm_db)

set(CMAKE_CXX_STANDARD 17)

include_directories(deps/sds)
include_directories(deps/get_opt)
include_directories(include)

aux_source_directory(deps/sds SDS_DIR_SRCS)
aux_source_directory(deps/get_opt GET_OPT_DIR_SRCS)
aux_source_directory(utils UTILS_DIR_SRCS)
aux_source_directory(src DIR_SRCS)

add_executable(${PROJECT_NAME} ${DIR_SRCS} ${UTILS_DIR_SRCS} ${SDS_DIR_SRCS} ${GET_OPT_DIR_SRCS})
