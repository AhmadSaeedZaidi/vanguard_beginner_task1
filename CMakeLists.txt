cmake_minimum_required(VERSION 3.16)
project(GuessQuest LANGUAGES CXX)

add_executable(GuessQuest 
	src/main.cpp
	src/game.cpp
)
target_compile_features(GuessQuest PRIVATE cxx_std_17)
