//
//  run.cpp
//  Code-Coverage-xcode
//
//  Created by Tyler on 2/2/26.
//
extern "C" {
#include "run.hpp"
}

#define CATCH_CONFIG_RUNNER

#include "catch.h"

bool run_tests() {
    const char *argv[] = { "test" };
    return (Catch::Session().run(1, argv) == 0);
}
