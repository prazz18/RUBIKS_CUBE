//
// Created by ASUS on 7/4/2024.
//

#ifndef CORNERPATTERNDATABASE_H
#define CORNERPATTERNDATABASE_H


#include "GenericRubiksCube.h"
#include "PatternDatabase.h"
#include "PermutationIndexer.h"
using namespace std;

class CornerPatternDatabase : public PatternDatabase {

    typedef RubiksCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const RubiksCube& cube) const;

};



#endif //CORNERPATTERNDATABASE_H
