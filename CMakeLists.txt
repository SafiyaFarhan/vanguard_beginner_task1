cmake_minimum_required(VERSION 3.16) # tells the minimum version of cmake needed
project(GuessQuest LANGUAGES CXX)  # defines the project anme and the langauge to code it

add_executable(guessquest   # craetes executable with the following source files
    src/main.cpp
    src/game.cpp            # corrected the name (file name was wrong)
    src/random.cpp          # added this file (it was missing)
)

target_include_directories(guessquest PRIVATE include)   # compilation error so added the include directory in the header


# tells executable needs C++17 standard
target_compile_features(guessquest PRIVATE cxx_std_17)
