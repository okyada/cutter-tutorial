if WITH_CUTTER
TESTS = run-test.sh
TESTS_ENVIRONMENT = NO_MAKE=yes CUTTER="$(CUTTER)"

noinst_LTLIBRARIES = test_stack.la
endif

INCLUDES = -I$(top_srcdir)/src
LIBS = $(CUTTER_LIBS) $(top_builddir)/src/libstack.la

AM_CFLAGS = $(CUTTER_CFLAGS)

AM_LDFLAGS = -module -rpath $(libdir) -avoid-version -no-undefined

test_stack_la_SOURCES = test-stack.c

EXTRA_DIST = run-test.sh

echo-cutter:
	@echo $(CUTTER)
