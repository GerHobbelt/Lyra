/*
Copyright René Ferdinand Rivera Morell
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#include "main_test.hpp"

#include "option_styles.cpp"

#include "main_test.hpp"

#include "examples/monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main	lyra_ex_option_styles_run_test_main
#endif

int main(void)
#undef main
{
	bfg::mini_test::scope test;
	{
		TEST_MAIN(test, "option_styles");
		TEST_MAIN(test, "option_styles", "~h");
		TEST_MAIN(test, "option_styles", "++flag");
		TEST_MAIN(test, "option_styles", "++name,Jane");
		TEST_MAIN_FAIL(test, "option_styles", "-h");
		TEST_MAIN_FAIL(test, "option_styles", "--flag");
		TEST_MAIN_FAIL(test, "option_styles", "--name=Jane");
	}
	return test;
}
