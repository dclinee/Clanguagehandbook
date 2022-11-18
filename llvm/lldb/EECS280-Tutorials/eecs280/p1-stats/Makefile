CXX ?= g++
CXXFLAGS ?= -Wall -Werror -pedantic -g --std=c++11 -Wno-sign-compare -Wno-comment

# Run a regression test
test: main.exe stats_tests.exe stats_public_test.exe
	./stats_public_test.exe
	./stats_tests.exe
	./main.exe < main_test.in > main_test.out
	diff main_test.out main_test.out.correct

# Compile the main executable
main.exe: main.cpp stats.cpp p1_library.cpp
	$(CXX) $(CXXFLAGS) main.cpp stats.cpp p1_library.cpp -o main.exe

# Compile the stats_tests executable
stats_tests.exe: stats_tests.cpp stats.cpp p1_library.cpp
	$(CXX) $(CXXFLAGS) stats_tests.cpp stats.cpp p1_library.cpp -o stats_tests.exe

# Compile the stats_public_test executable
stats_public_test.exe: stats_public_test.cpp stats.cpp p1_library.cpp
	$(CXX) $(CXXFLAGS) stats_public_test.cpp stats.cpp p1_library.cpp -o stats_public_test.exe

# Remove automatically generated files
clean :
	rm -rvf *.exe *~ *.out *.dSYM *.stackdump

# Disable built-in rules
.SUFFIXES:

# Run style check tools
CPD ?= /usr/um/pmd-6.0.1/bin/run.sh cpd
OCLINT ?= /usr/um/oclint-0.13/bin/oclint
FILES := stats.cpp stats_tests.cpp main.cpp
style :
	$(OCLINT) \
    -no-analytics \
    -rule=LongLine \
    -rule=HighNcssMethod \
    -rule=DeepNestedBlock \
    -rule=TooManyParameters \
    -rc=LONG_LINE=90 \
    -rc=NCSS_METHOD=40 \
    -rc=NESTED_BLOCK_DEPTH=4 \
    -rc=TOO_MANY_PARAMETERS=4 \
    -max-priority-1 0 \
    -max-priority-2 0 \
    -max-priority-3 0 \
    $(FILES) \
    -- -xc++ --std=c++11
	$(CPD) \
    --minimum-tokens 100 \
    --language cpp \
    --failOnViolation true \
    --files $(FILES)
	@echo "########################################"
	@echo "EECS 280 style checks PASS"
