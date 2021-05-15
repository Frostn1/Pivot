CC_NO_VERBOSE = @echo "Building $@..."; $(CC)

ifeq ($(VERBOSE),YES)
  V_CC = $(CC_VERBOSE)
  AT := 
else
  V_CC = $(CC_NO_VERBOSE)
  AT := @
endif

C_FILES = $(wildcard src/*.c)
O_FILES = $(C_FILES:src/%.c=build/%.o)

.PHONY: all clean
.DEFAULT: all

all: pi

pi: $(O_FILES)
	gcc -o $@ $^

build:
	$(AT)mkdir -p build

build/%.o: src/%.c | build
	gcc -c $< -o $@

clean:
	@echo Removing object files
	$(AT)-rm -f $(O_FILES)
	@echo Removing application
	$(AT)-rm -f program
	@echo Removing build directory
	$(AT)-rm -rf build