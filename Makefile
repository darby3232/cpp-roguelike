# Adapted from : https://stackoverflow.com/questions/30573481/how-to-write-a-makefile-with-separate-source-and-header-directories
# Specify our directories
SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := .

# Name our exe
EXE := $(BIN_DIR)/game

# specify the source files. The (wildcard) function is used here to automatically expand the wildcard, as it wouldn't expand normall as a variable
SRC := $(wildcard $(SRC_DIR)/*.cpp)

# specify the object files
OBJ := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
# Also can do like:
# OBJ := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

# Handle the flags
CPPFLAGS := -Iinclude -MMD -MP
CXXFLAGS := -Wall
LDFLAGS	 := -Llib
LDLIBS	 := -l mingw32 -l SDL2main -l SDL2 -l SDL2_image -l SDL2_ttf -l SDL2_mixer

# Simple make command
all := $(EXE)

# all is not a real target, don't make a folder
.PHONY: all

# Prerequisites for building the executable, and fill the recipes
# $^ resolves to all src files, $@ resolves to the current target being generated
$(EXE): $(OBJ) | $(BIN_DIR)
	$(CXX) $(LDFLAGS) $^ $(LDLIBS) -o $@

# $< refers to the first src file
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

# make sure these dirs exist
# Have to change -p (linux) for -ea 0 (powershell -_- )
$(BIN_DIR) $(OBJ_DIR):
	mkdir $@ -ea 0

clean:
	@$(RM) -rv $(BIN_DIR) $(OBJ_DIR)

-include $(OBJ:.o=.d)