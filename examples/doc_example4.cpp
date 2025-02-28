/*
Copyright René Ferdinand Rivera Morell
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

// tag::part1[]
#include <iostream>
#include <lyra/lyra.hpp>

#include "examples/monolithic_examples.h"

#if defined(OVERRIDE_MAIN_F)
#define main OVERRIDE_MAIN_F
#elif defined(BUILD_MONOLITHIC)
#define main	lyra_doc_example4_main
#endif

int main(int argc, const char** argv)
#undef main
{
	int repeat = 0;
	std::string message;
	// Ex: <exe> --repeat=10 "Hello world."
	auto cli
		= lyra::opt(repeat, "-repeat")["--repeat"]
		| lyra::arg(message, "message");
	if (cli.parse({ argc, argv }))
	{
		for (int count = 0; count < repeat; ++count)
			std::cout << message << "\n";
	}
	return 0;
}
// end::part1[]
