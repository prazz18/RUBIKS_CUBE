#include <bits/stdc++.h>
#include "GenericRubiksCube.h"
#include "RubiksCube3d.cpp"

using namespace std;
int main() {
    RubiksCube3d r1,r2;
    // overloading the comparison operator
    r1.l();
    r2 = r1;
    unordered_map<RubiksCube3d , bool  , Hash3d>mp1;
    mp1[r1] = true;
    if(mp1[r2])cout<<"yes\n";

}
