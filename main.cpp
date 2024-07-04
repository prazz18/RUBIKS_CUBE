#include <bits/stdc++.h>
#include "GenericRubiksCube.h"
#include "BFSSolver.h"
#include "RubiksCube3d.cpp"

using namespace std;
int main() {
    RubiksCube3d r1;

    r1.print();

    vector<RubiksCube::MOVE>movesPerformed = r1.randomShuffleCube(5);
    for(auto moves : movesPerformed)cout<<r1.getMove(moves)<<' ';
    cout<<"\n";
    r1.print();
    
    cout<<"\n";
    BFSSolver<RubiksCube3d , Hash3d>bfsSolver(r1);
    vector<RubiksCube::MOVE>moves = bfsSolver.solve();
    r1 = bfsSolver.rubiksCube;
    cout<<"\n";
    for(auto move : moves)cout<<r1.getMove(move)<<' ';
    cout<<'\n';
    r1.print();


}
