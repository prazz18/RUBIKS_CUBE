//
// Created by ASUS on 6/22/2024.
//
#include "bits/stdc++.h"
#include "GenericRubiksCube.h"
using namespace std;

#ifndef DFSSOLVER_H
#define DFSSOLVER_H

template<typename T , typename H>
class DFSSolver {
private:
    vector<RubiksCube::MOVE>moves;
    int max_dep;
    bool dfs(int dep) {
        if(rubiksCube.isSolved())return true;
        if(dep > max_dep)return false;
        for(int i=0;i<18;++i) {
            rubiksCube.move(RubiksCube::MOVE(i));
            moves.push_back(RubiksCube::MOVE(i));
            if(dfs(dep+1))return true;
            moves.pop_back();
            rubiksCube.invert(RubiksCube::MOVE(i));
        }
        return false;
    }

public:
    T rubiksCube;
    DFSSolver(T _rubiksCube , int _max_dep) {
        rubiksCube = _rubiksCube;
        max_dep = _max_dep;
    }
    vector<RubiksCube::MOVE>solve() {
        dfs(1);
        return moves;
    }

};




#endif //DFSSOLVER_H
