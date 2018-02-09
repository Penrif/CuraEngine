//Copyright (c) 2018 Ultimaker B.V.
//CuraEngine is released under the terms of the AGPLv3 or higher.

#include "UnionFindTest.h"

namespace cura
{

void UnionFindTest::setUp()
{
    union_find = UnionFind<int>(); //Recreate the UnionFind data structure.
}

void UnionFindTest::tearDown()
{
    //Nothing to tear down.
}

void UnionFindTest::findSimpleTest()
{
    int data = 5;
    union_find.add(data);
    size_t result = union_find.find(data);
    CPPUNIT_ASSERT_MESSAGE("The set of the first element may not be -1.", result != (size_t)-1);
}

}