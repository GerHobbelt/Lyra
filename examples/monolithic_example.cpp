
#include "monolithic_examples.h"

// define a name for the monolith
#define USAGE_NAME "lyra"

// load the monolithic definitions which you need for the dispatch table:
#include "monolithic_main_internal_defs.h"

// declare your own monolith dispatch table:
MONOLITHIC_CMD_TABLE_START()
{ "combined_parser", { .f = lyra_combined_parser_main } },
{ "count_flag", { .fa = lyra_count_flag_main } },
{ "doc_commands", { .fa = lyra_doc_commands_main } },
{ "doc_example1", { .fa = lyra_doc_example1_main } },
{ "doc_example1_alt", { .fa = lyra_doc_example1_alt_main } },
{ "doc_example2", { .fa = lyra_doc_example2_main } },
{ "doc_example2_alt", { .fa = lyra_doc_example2_alt_main } },
{ "doc_example3", { .fa = lyra_doc_example3_main } },
{ "doc_example4", { .fa = lyra_doc_example4_main } },
{ "doc_example5", { .fa = lyra_doc_example5_main } },
{ "doc_example6", { .fa = lyra_doc_example6_main } },
{ "doc_groups", { .fa = lyra_doc_groups_main } },
{ "doc_simple", { .f = lyra_doc_simple_main } },
{ "doc_simple_alt", { .fa = lyra_doc_simple_alt_main } },
{ "option_styles", { .f = lyra_option_styles_main } },
{ "args_run_test", { .f = lyra_args_run_test_main } },
{ "cardinality_run_test", { .f = lyra_cardinality_run_test_main } },
{ "cmdline_run_test", { .f = lyra_cmdline_run_test_main } },
{ "combined_parser_run_test", { .f = lyra_combined_parser_run_test_main } },
{ "command_run_test", { .f = lyra_command_run_test_main } },
{ "doc_commands_run_test", { .f = lyra_doc_commands_run_test_main } },
{ "doc_example1_alt_run_test",	{ .f = lyra_doc_example1_alt_run_test_main } },
{ "doc_example1_run_test", { .f = lyra_doc_example1_run_test_main } },
{ "doc_example2_alt_run_test",	{ .f = lyra_doc_example2_alt_run_test_main } },
{ "doc_example2_run_test", { .f = lyra_doc_example2_run_test_main } },
{ "doc_example3_run_test", { .f = lyra_doc_example3_run_test_main } },
{ "doc_example4_run_test", { .f = lyra_doc_example4_run_test_main } },
{ "doc_example5_run_test", { .f = lyra_doc_example5_run_test_main } },
{ "doc_example6_run_test", { .f = lyra_doc_example6_run_test_main } },
{ "doc_groups_run_test", { .f = lyra_doc_groups_run_test_main } },
{ "doc_simple_alt_run_test", { .f = lyra_doc_simple_alt_run_test_main } },
{ "doc_simple_run_test", { .f = lyra_doc_simple_run_test_main } },
{ "eval_mode_run_test", { .f = lyra_eval_mode_run_test_main } },
{ "ex_count_flag_run_test", { .f = lyra_ex_count_flag_run_test_main } },
{ "ex_option_styles_run_test",	{ .f = lyra_ex_option_styles_run_test_main } },
{ "flag_parser_run_test", { .f = lyra_flag_parser_run_test_main } },
{ "group_run_test", { .f = lyra_group_run_test_main } },
{ "hint_run_test", { .f = lyra_hint_run_test_main } },
{ "invalid_parsers_run_test", { .f = lyra_invalid_parsers_run_test_main } },
{ "issue_49_run_test", { .f = lyra_issue_49_run_test_main } },
{ "issue_55_run_test", { .f = lyra_issue_55_run_test_main } },
{ "issue_65_run_test", { .f = lyra_issue_65_run_test_main } },
{ "issue_70_run_test", { .f = lyra_issue_70_run_test_main } },
{ "issue_73_run_test", { .f = lyra_issue_73_run_test_main } },
{ "issue_92_run_test", { .f = lyra_issue_92_run_test_main } },
{ "base_exe", { .f = lyra_base_exe_main } },
{ "literal_run_test", { .f = lyra_literal_run_test_main } },
{ "main_run_test", { .f = lyra_main_run_test_main } },
{ "multiple_flags_run_test", { .f = lyra_multiple_flags_run_test_main } },
{ "optional_arg_help_run_test",	{ .f = lyra_optional_arg_help_run_test_main } },
{ "optional_type_run_test", { .f = lyra_optional_type_run_test_main } },
{ "option_styles_run_test", { .f = lyra_option_styles_run_test_main } },
{ "option_variants_run_test", { .f = lyra_option_variants_run_test_main } },
{ "required_run_test", { .f = lyra_required_run_test_main } },
{ "single_include_test", { .f = lyra_single_include_test_main } },
{ "single_parser_run_test", { .f = lyra_single_parser_run_test_main } },
{ "trait_utils_run_test", { .f = lyra_trait_utils_run_test_main } },
{ "unrecognized_opts_run_test",	{ .f = lyra_unrecognized_opts_run_test_main } },
{ "usage_text_run_test", { .f = lyra_usage_text_run_test_main } },
{ "values_run_test", { .f = lyra_values_run_test_main } },
{ "values_short_run_test", { .f = lyra_values_short_run_test_main } },
{ "value_choices_run_test", { .f = lyra_value_choices_run_test_main } },
MONOLITHIC_CMD_TABLE_END();

// load the monolithic core dispatcher
#include "monolithic_main_tpl.h"
