//
//     -dM: 
//         Generate a list of ‘#define’ directives for all the macros defined
//         during the execution of the preprocessor, including predefined macros.
//
//         Must be invoked with -E because otherwise would be interpreted as
//         synonym for -fdump-rtl-mach
// 
//   gcc -E -dM M.c
//   gcc -E -dM M.c | grep    TQ84
//   gcc -E -dM M.c | grep -v TQ84
//
#define TQ84_FOO foo
#define TQ84_BAR
