 the stack frame now selected, restoring
all registers saved by frames farther in) or else to debugger
"convenience" variables (any such name not a known register).
Use assignment expressions to give values to convenience variables.

{TYPE}ADREXP refers to a datum of data type TYPE, located at address ADREXP.
@ is a binary operator for treating consecutive data objects
anywhere in memory as an array.  FOO@NUM gives an array whose first
element is FOO, whose second element is stored in the space following
where FOO is stored, etc.  FOO must be an expression whose value
resides in memory.

EXP may be preceded with /FMT, where FMT is a format letter
but no count or size letter (see "x" command).   Tell GDB to only display the symbolic form of an address if the
offset between the closest earlier symbol and the address is less than
the specified maximum offset.  The default is "unlimited", which tells GDB
to always print the symbolic form of an address if any symbol precedes
it.  Zero is equivalent to "unlimited".        Show the largest offset that will be printed in <SYMBOL+1234> form.     Set the largest offset that will be printed in <SYMBOL+1234> form.      Show printing of source filename and line number with <SYMBOL>. Set printing of source filename and line number with <SYMBOL>.  Construct a GDB command and then evaluate it.
Usage: eval "format string", ARG1, ARG2, ARG3, ..., ARGN
Convert the arguments to a string as "printf" would, but then
treat this string as a command line, and evaluate it. display != NULL void delete_display(display*) %d:   %c   /%d%c%c  /%c  ny *p == 'p' && *(p + 1) == '\0' (nil) one or more display numbers No display number %d.
 Argument required. Symbol " `self'
 `this'
 " is at  ,
 -- loaded at   in overlay section %s " is  a label at address  an argument in register %s a variable in register %s an argument at offset %ld a typedef a function at address  unresolved of unknown (botched) type objfile->pspace == pspace No symbol matches %s.
 unmapped %s + %u %s in %s overlay section %s
 <* %+d *> %s%ps =  options->format != 's' Undefined output size "%c". Undefined output format "%c". Unable to display "%s": %s %p[<error: %s>%p]
 starting display address undisplay inspect max-symbolic-offset symbol-filename ?;??@7???9???9??0;??:??@;?? ;??0:??P:???7??@7???8??p7??e;??MW???X???V???V???X???U???X???X???X???X???X???X???X???X???W???X???X???X???X???W???W???X???X???W???X??{W??,r??r???o???o???o??,p??Lp??lp???p???n???n???n???n???n??    Show available static probes.
Usage: info probes [all|TYPE [ARGS]]
TYPE specifies the type of the probe, and can be one of the following:
  - stap
If you specify TYPE, there may be additional arguments needed by the
subcommand.
If you do not specify any argument, or specify `all', then the command
will show information about all types of probes.     void print_ui_out_info(probe*)  /build/gdb-OxeNvS/gdb-9.2/gdb/probe.c   headings.size () == values.size ()      void compile_probe_arg(internalvar*, agent_expr*, axs_value*, void*)    Invalid probe argument %d -- probe has %d arguments available   value* compute_probe_arg(gdbarch*, internalvar*, void*) Invalid probe argument %d -- probe has %u arguments available   Probe %s:%s cannot be disabled.
        Probe %s:%s cannot be enabled.
 Show information about all type of probes.      Enable probes.
Usage: enable probes [PROVIDER [NAME [OBJECT]]]
Each argument is a regular expression, used to select probes.
PROVIDER matches probe provider names.
NAME matches the probe names.
OBJECT matches the executable or shared library name.
If you do not specify any argument then the command will enable
all defined probes.     Disable probes.
Usage: disable probes [PROVIDER [NAME [OBJECT]]]
Each argument is a regular expression, used to select probes.
PROVIDER matches probe provider names.
NAME matches the probe names.
OBJECT matches the executable or shared library name.
If you do not specify any argument then the command will disable
all defined probes.  event_location_type (location) == PROBE_LOCATION        std::vector<symtab_and_line> parse_probes(const event_location*, program_space*, linespec_result*)      No probe matching objfile=`%s', provider=`%s', name=`%s'        void gen_ui_out_table_header_info(const std::vector<bound_probe>&, const static_probe_ops*)     probe_fields.size () == headings.size () info probes  probes probe != NULL sel >= -1 No probe at PC %s Invalid provider regexp Invalid probe regexp Invalid object file regexp No probes matched.
 Probe %s:%s disabled.
 Probe %s:%s enabled.
 _probe_argc _probe_arg0 _probe_arg1 _probe_arg2 _probe_arg3 _probe_arg4 _probe_arg5 _probe_arg6 _probe_arg7 _probe_arg8 _probe_arg9 _probe_arg10 _probe_arg11 argument to `%s' missing no probe name specified invalid provider name invalid objfile name <any> '%s' is not a probe linespec s