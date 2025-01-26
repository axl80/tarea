CC = gcc
CXX = g++
CFLAGS = -Wall -Iinclude -Itests/unity
LDFLAGS = 

SRCS = src/sort_array.cpp
TEST_SRCS = tests/test_runner.c tests/unity/unity.c
OBJS = $(SRCS:.cpp=.o)

TARGET = run_tests
BUILD_DIR = build

all: $(TARGET)

$(TARGET): $(SRCS) $(TEST_SRCS)
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CFLAGS) $(SRCS) $(TEST_SRCS) -o $(BUILD_DIR)/$(TARGET)

run: $(TARGET)
	./$(BUILD_DIR)/$(TARGET)

clean:
	rm -rf $(BUILD_DIR)