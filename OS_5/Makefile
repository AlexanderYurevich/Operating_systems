# Compiler
CXX := g++

# Directories
SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin
INCLUDE_DIR := include

# Source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# Object files
OBJS := $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# Executables
EXES := $(BIN_DIR)/client.exe $(BIN_DIR)/server.exe

# Targets
all: $(EXES)

# Link
$(BIN_DIR)/client.exe: $(OBJ_DIR)/client.o
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)
	$(CXX) -o $@ $^

$(BIN_DIR)/server.exe: $(OBJ_DIR)/server.o
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)
	$(CXX) -o $@ $^

# Compile
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CXX) -I$(INCLUDE_DIR) -c $< -o $@

# Clean
clean:
	if exist $(OBJ_DIR) rmdir /s /q $(OBJ_DIR)
	if exist $(BIN_DIR) rmdir /s /q $(BIN_DIR)

# Run the server
run: $(BIN_DIR)/server.exe
	$(BIN_DIR)\server.exe

.PHONY: all clean run
