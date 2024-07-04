#include <bits/stdc++.h>
#include "GenericRubiksCube.h"
#include "BFSSolver.h"
#include "RubiksCube3d.cpp"
#include "RubiksCubeBitBoard.cpp"
#include "IDDFSSolver.h"
#include "IDAStarSolver.h"
using namespace std;
int main() {
    // RubiksCube3d r1;
    //
    // r1.print();
    //
    // vector<RubiksCube::MOVE>movesPerformed = r1.randomShuffleCube(6);
    // for(auto moves : movesPerformed)cout<<r1.getMove(moves)<<' ';
    // cout<<"\n";
    // r1.print();
    //
    // cout<<"\n";
    // IDAstarSolver<RubiksCube3d , Hash3d>bfsSolver(r1,);
    // vector<RubiksCube::MOVE>moves = bfsSolver.solve();
    // r1 = bfsSolver.rubiksCube;
    // cout<<"\n";
    // for(auto move : moves)cout<<r1.getMove(move)<<' ';
    // cout<<'\n';
    // r1.print();

    string fileName = "Databases\cornerDepth5V1.txt";

    //    Code to create Corner Database
    //    CornerDBMaker dbMaker(fileName, 0x99);
    //    dbMaker.bfsAndStore();

    RubiksCubeBitboard cube;
    auto shuffleMoves = cube.randomShuffleCube(10);
    for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
    cout << "\n";

    cube.print();

    IDAstarSolver<RubiksCubeBitboard, HashBitboard> idaStarSolver(cube, fileName);
    auto moves = idaStarSolver.solve();

    idaStarSolver.rubiksCube.print();
    for (auto move: moves) cout << cube.getMove(move) << " ";
    cout << "\n";

    return 0;

}
