cmake_minimum_required(VERSION 3.0)
project(p2)
include_directories(
	"./src/"
)

set(SRC
	"./main.cpp"
	"./src/myfunc.h"
)

add_executable(p2 ${SRC})


