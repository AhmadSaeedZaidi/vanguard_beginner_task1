cmake_minimum_required(VERSION 3.16)
project(GuessQuest LANGUAGES CXX)

add_executable(guessquest
    src/main.cpp
    src/games.cpp
)

target_compile_features(guessquest PRIVATE cxx_std_17)
