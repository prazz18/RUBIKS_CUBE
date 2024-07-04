//
// Created by ASUS on 7/4/2024.
//

#include <bits/stdc++.h>
#include "GenericRubiksCube.h"
#include "DFSSolver.h"

#include "DFSSolver.h"

using namespace std;

#ifndef IDDFSSOLVER_H
#define IDDFSSOLVER_H

template<typename T , typename H>
class IDDFSSolver {
private:
    int max_dep;
    vector<RubiksCube::MOVE>moves;


public:
    T rubiksCube;
    IDDFSSolver(T _rubiksCube , int _max_dep = 7) {
        rubiksCube = _rubiksCube;
        max_dep = _max_dep;
    }
    // using dfs solver with increasing max search depth
    vector<RubiksCube::MOVE> solve() {
        for(int i=1;i<=max_dep ; ++i) {
            DFSSolver<T,H>dfs_solver(rubiksCube , i);
            moves = dfs_solver.solve();
            if(dfs_solver.rubiksCube.isSolved()) {
                rubiksCube = dfs_solver.rubiksCube;
                break;
            }
        }

        return moves;
    }
};


#endif //IDDFSSOLVER_H
