/*
Copyright René Ferdinand Rivera Morell
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#include <sstream>
#include <iostream>
#include <lyra/lyra.hpp>
#include "mini_test.hpp"

#include "examples/monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main	lyra_optional_arg_help_run_test_main
#endif

int main(void)
{
    using namespace lyra;
    bfg::mini_test::scope test;

	{
		bool show_help = false;
		std::string message;
		// Ex: <exe> --repeat=10 "Hello world."
		auto cli
			= lyra::cli()
			| help(show_help)
			| lyra::arg(message, "++message++").help("**message**");
		std::ostringstream help_text;
		help_text << cli ;
		test
			(REQUIRE(help_text.str().find("**message**") != std::string::npos))
			(REQUIRE(help_text.str().find("[<++message++>]") != std::string::npos));
	}

	{
		bool show_help = false;
		std::string message;
		// Ex: <exe> --repeat=10 "Hello world."
		auto cli
			= lyra::cli()
			| help(show_help)
			| lyra::arg(message, "++message++").help("**message**").required();
		std::ostringstream help_text;
		help_text << cli ;
		test
			(REQUIRE(help_text.str().find("**message**") != std::string::npos))
			(REQUIRE(help_text.str().find("[<++message++>]") == std::string::npos))
			(REQUIRE(help_text.str().find("++message++") != std::string::npos));
	}

	return test;
}
