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
#define main	lyra_required_run_test_main
#endif

int main(void)
#undef main
{
	using namespace lyra;
	bfg::mini_test::scope test;

	// no .required() or .optional()
	{
		std::string name;
		int number = 1;
		auto cli =
			opt(name, "name")["--name"]
			| opt(number, "number")["--number"];
		auto result = cli.parse({ "TestApp", "--name", "foo" });
		test
			(REQUIRE(result))
			(REQUIRE(name == "foo"))
			(REQUIRE(number == 1));
	}
	// .optional() and value present
	{
		std::string name;
		int number = 1;
		auto cli =
			opt(name, "name")["--name"].optional()
			| opt(number, "number")["--number"];
		auto result = cli.parse({ "TestApp", "--name", "foo" });
		test
			(REQUIRE(result))
			(REQUIRE(name == "foo"))
			(REQUIRE(number == 1));
	}
	// .optional() and value not present
	{
		std::string name;
		int number = 1;
		auto cli =
			opt(name, "name")["--name"].optional()
			| opt(number, "number")["--number"];
		auto result = cli.parse({ "TestApp", "--number", "42" });
		test
			(REQUIRE(result))
			(REQUIRE(name == ""))
			(REQUIRE(number == 42));
	}
	// .required() and value present
	{
		std::string name;
		int number = 1;
		auto cli =
			opt(name, "name")["--name"].required()
			| opt(number, "number")["--number"];
		auto result = cli.parse({ "TestApp", "--name", "foo" });
		test
			(REQUIRE(result))
			(REQUIRE(name == "foo"))
			(REQUIRE(number == 1));
	}
	// .required() and value not present
	{
		std::string name;
		int number = 1;
		auto cli =
			opt(name, "name")["--name"].required()
			| opt(number, "number")["--number"];
		auto result = cli.parse({ "TestApp", "--number", "42" });
		test
			(REQUIRE(!result))
			(REQUIRE(result.message() == "Expected: --name <name>"));
	}

	return test;
}
