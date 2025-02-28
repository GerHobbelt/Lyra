
#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

int lyra_combined_parser_main(void);
int lyra_count_flag_main(int argc, const char ** argv);
int lyra_doc_commands_main(int argc, const char ** argv);
int lyra_doc_example1_main(int argc, const char ** argv);
int lyra_doc_example1_alt_main(int argc, const char ** argv);
int lyra_doc_example2_main(int argc, const char ** argv);
int lyra_doc_example2_alt_main(int argc, const char ** argv);
int lyra_doc_example3_main(int argc, const char ** argv);
int lyra_doc_example4_main(int argc, const char ** argv);
int lyra_doc_example5_main(int argc, const char ** argv);
int lyra_doc_example6_main(int argc, const char ** argv);
int lyra_doc_groups_main(int argc, const char ** argv);
int lyra_doc_simple_main(void);
int lyra_doc_simple_alt_main(int argc, const char ** argv);
int lyra_option_styles_main(void);
int lyra_args_run_test_main(void);
int lyra_cardinality_run_test_main(void);
int lyra_cmdline_run_test_main(void);
int lyra_combined_parser_run_test_main(void);
int lyra_command_run_test_main(void);
int lyra_doc_commands_run_test_main(void);
int lyra_doc_example1_alt_run_test_main(void);
int lyra_doc_example1_run_test_main(void);
int lyra_doc_example2_alt_run_test_main(void);
int lyra_doc_example2_run_test_main(void);
int lyra_doc_example3_run_test_main(void);
int lyra_doc_example4_run_test_main(void);
int lyra_doc_example5_run_test_main(void);
int lyra_doc_example6_run_test_main(void);
int lyra_doc_groups_run_test_main(void);
int lyra_doc_simple_alt_run_test_main(void);
int lyra_doc_simple_run_test_main(void);
int lyra_eval_mode_run_test_main(void);
int lyra_ex_count_flag_run_test_main(void);
int lyra_ex_option_styles_run_test_main(void);
int lyra_flag_parser_run_test_main(void);
int lyra_group_run_test_main(void);
int lyra_hint_run_test_main(void);
int lyra_invalid_parsers_run_test_main(void);
int lyra_issue_49_run_test_main(void);
int lyra_issue_55_run_test_main(void);
int lyra_issue_65_run_test_main(void);
int lyra_issue_70_run_test_main(void);
int lyra_issue_73_run_test_main(void);
int lyra_issue_92_run_test_main(void);
int lyra_base_exe_main(void);
int lyra_literal_run_test_main(void);
int lyra_main_run_test_main(void);
int lyra_multiple_flags_run_test_main(void);
int lyra_optional_arg_help_run_test_main(void);
int lyra_optional_type_run_test_main(void);
int lyra_option_styles_run_test_main(void);
int lyra_option_variants_run_test_main(void);
int lyra_required_run_test_main(void);
int lyra_single_include_test_main(void);
int lyra_single_parser_run_test_main(void);
int lyra_trait_utils_run_test_main(void);
int lyra_unrecognized_opts_run_test_main(void);
int lyra_usage_text_run_test_main(void);
int lyra_values_run_test_main(void);
int lyra_values_short_run_test_main(void);
int lyra_value_choices_run_test_main(void);

#ifdef __cplusplus
}
#endif

#endif
