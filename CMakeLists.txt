cmake_minimum_required(VERSION 3.17)
project(dm_db C)

set(CMAKE_C_STANDARD 11)

include_directories(deps/sds)
include_directories(include)

add_executable(dm_db
        deps/sds/sds.c deps/sds/sds.h include/dm_malloc.h   # sds
        src/ad_list.c src/dict.c utils/math.cpp include/db_type.h
        src/dm_api.c src/dm_main.c)
