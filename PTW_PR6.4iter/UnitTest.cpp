#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Elem.h"
TEST_CASE( "Arguments initialized") {
    Elem* L = NULL;
    Insert(L, 1);
    Insert(L, 2);
    Change(L);

    REQUIRE( L->info == 2);
    REQUIRE( L->link->info == 1);
}

