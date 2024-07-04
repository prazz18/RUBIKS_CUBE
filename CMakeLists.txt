cmake_minimum_required(VERSION 3.28)
project(RUBIKS_CUBE)

set(CMAKE_CXX_STANDARD 20)

add_executable(RUBIKS_CUBE main.cpp
        GenericRubiksCube.cpp
        GenericRubiksCube.h
        RubiksCube3d.cpp
        DFSSolver.h
        BFSSolver.h
        IDDFSSolver.h
        NibbleArray.cpp
        NibbleArray.h
        PatternDatabase.cpp
        PatternDatabase.h
        math.cpp
        math.h
        PermutationIndexer.h
        CornerPatternDatabase.cpp
        CornerPatternDatabase.h
        RubiksCubeBitboard.cpp
        CornerDBMaker.cpp
        CornerDBMaker.h
        IDAStarSolver.h
)
