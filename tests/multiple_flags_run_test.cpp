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
#define main	lyra_multiple_flags_run_test_main
#endif

int main(void)
#undef main
{
    using namespace lyra;
    bfg::mini_test::scope test;

    {
        bool a = false, b = false, c = false;
        auto cli = opt( a )["-a"] | opt( b )["-b"] | opt( c )["-c"];
        auto result = cli.parse({ "TestApp", "-a", "-b", "-c" });
        test
            (REQUIRE(result))
            (REQUIRE(a))
            (REQUIRE(b))
            (REQUIRE(c));
    }
    {
        bool a = false, b = false, c = false;
        auto cli = opt( a )["-a"] | opt( b )["-b"] | opt( c )["-c"];
        auto result = cli.parse({ "TestApp", "-abc" });
        test
            (REQUIRE(result))
            (REQUIRE(a))
            (REQUIRE(b))
            (REQUIRE(c));
    }

    return test;
}
