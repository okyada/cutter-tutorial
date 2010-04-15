TESTS = run-test.sh
TESTS_ENVIRONMENT = NO_MAKE=yes CUTTER="$(CUTTER)"

noinst_LTLIBRARIES = test_stack.la

INCLUDES = $(CUTTER_CFLAGS) -I$(top_srcdir)/src
LIBS = $(CUTTER_LIBS)

LDFLAGS = -module -rpath $(libdir) -avoid-version -no-undefined

test_stack_la_SOURCES = test-stack.c

echo-cutter:
	@echo $(CUTTER)
