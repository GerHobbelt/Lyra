/*
Copyright René Ferdinand Rivera Morell
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#include "main_test.hpp"

#include "doc_example1_alt.cpp"

#include "main_test.hpp"

#include "examples/monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main	lyra_doc_example1_alt_run_test_main
#endif

int main(void)
#undef main
{
	bfg::mini_test::scope test;
	{
		TEST_MAIN(test, "doc_example1_alt", "-w", "100");
		TEST_MAIN(test, "doc_example1_alt", "--width=100");
		TEST_MAIN_FAIL(test, "doc_example1_alt", "what");
	}
	return test;
}
