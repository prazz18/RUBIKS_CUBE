//
// Created by ASUS on 6/23/2024.
//

#include "bits/stdc++.h"
#include "GenericRubiksCube.h"
using namespace std;


#ifndef BFSSOLVER_H
#define BFSSOLVER_H

template<typename T , typename H>
class BFSSolver {
private:
    unordered_map<T, bool , H>vis;
    unordered_map<T , RubiksCube::MOVE , H>move_done;
    vector<RubiksCube::MOVE>moves;

    T bfs() {
        queue<T>q;
        vis[rubiksCube] = true;
        q.push(rubiksCube);
        while(!q.empty()) {
            T x = q.front();
            q.pop();
            if(x.isSolved())return x;
            for(int i=0;i<18;++i) {
                x.move(RubiksCube::MOVE(i));
                if(!vis[x]) {
                    vis[x] = true;
                    move_done[x] = RubiksCube::MOVE(i);
                    q.push(x);
                }
                x.invert(RubiksCube::MOVE(i));
            }
        }
        return rubiksCube;
    }

public:
    T rubiksCube;
    BFSSolver(T _rubiksCube) {
        rubiksCube = _rubiksCube;
    }
    vector<RubiksCube::MOVE>solve() {
        T solvedCube = bfs();
        T x = solvedCube;
        while(!(solvedCube == rubiksCube)) {
            auto curr_move = RubiksCube::MOVE(move_done[solvedCube]);
            moves.push_back(curr_move);
            solvedCube.invert(curr_move);
        }
        reverse(moves.begin(),moves.end());
        rubiksCube = x;
        return moves;
    }
};


#endif //BFSSOLVER_H
