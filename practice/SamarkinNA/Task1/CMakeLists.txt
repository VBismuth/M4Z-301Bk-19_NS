cmake_minimum_required(VERSION 3.0)
project(NS_task1)

include_directories(
	"./"
	"./src"
	)

set(SRC
	main.cpp
	src/United.cpp
	)

add_executable(task1 ${SRC})
