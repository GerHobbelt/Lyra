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
#define main	lyra_doc_example5_main
#endif

int main(int argc, const char** argv)
#undef main
{
	std::string choice;
	// Ex: <exe> --choice=red
	auto cli = lyra::cli()
		| lyra::opt(choice, "-c")["--choice"]
			  .choices("red", "green", "blue");
	auto result = cli.parse({ argc, argv });
	if (result)
	{
		std::cout << "Your preferred color is " << choice << "\n";
		return 0;
	}
	else
	{
		std::cerr << result.message() << "\n";
		return 1;
	}
}
// end::part1[]
