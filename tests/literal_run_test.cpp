/*
Copyright René Ferdinand Rivera Morell
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#include <lyra/lyra.hpp>
#include "mini_test.hpp"

#include "examples/monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main	lyra_literal_run_test_main
#endif

int main(void)
#undef main
{
    using namespace lyra;
    bfg::mini_test::scope test;
    std::string name;
    auto p = cli() | literal("one");

    test(REQUIRE(p.parse( { "TestApp", "one" } )));
    test(REQUIRE(!p.parse( { "TestApp", "two" } )));
    test(REQUIRE(!p.parse( { "TestApp", "one", "two" } )));
    test(REQUIRE(!p.parse( { "TestApp", "two", "one" } )));

    return test;
}
