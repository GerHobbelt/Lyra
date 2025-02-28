/*
Copyright René Ferdinand Rivera Morell
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#include "mini_test.hpp"
#include <lyra/lyra.hpp>
#include <string>
#include <vector>

#include "examples/monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main	lyra_eval_mode_run_test_main
#endif

int main(void)
#undef main
{
	using namespace lyra;
	bfg::mini_test::scope test;

	{
		int a = 0;
		int b = 1;
		int c = 2;
		std::vector<std::string> d;
		auto cli = lyra::cli().relaxed();
		cli |= opt(a, "x")["-a"].optional();
		cli |= opt(b, "x")["-b"].optional();
		cli |= opt(c, "x")["-c"].optional();
		cli |= arg(d, "s").choices(
			[](const std::string & v) { return v[0] != '-'; });
		auto result = cli.parse(
			{ "TestApp", "first", "--second", "-a9", "-b8", "-c7" });
		test(REQUIRE(result));
		test(REQUIRE(a == 9));
		test(REQUIRE(b == 8));
		test(REQUIRE(c == 7));
	}

	return test;
}
