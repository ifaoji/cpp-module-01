CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++14 -MMD -MP
CPPFLAGS = 
LDFLAGS =
LDLIBS =

GTEST_LIB = $(GTEST_BUILD_DIR)/libgtest.a
GTEST_MAIN_LIB = $(GTEST_BUILD_DIR)/libgtest_main.a`

GTEST_DIR = ../../lib/googletest
GTEST_BUILD_DIR = $(GTEST_DIR)/build
GTEST_LIB_DIR = $(GTEST_BUILD_DIR)/lib
CPPFLAGS += -I$(GTEST_DIR)/googletest/include
CXXFLAGS += -g -pthread
LDFLAGS += -L$(GTEST_LIB_DIR)
LDLIBS += -lgtest -lgtest_main

RAW_SRCS =	test \

SRC_DIR = ./src
SRCS = $(RAW_SRCS:%=$(SRC_DIR)/%.cpp)

OBJ_DIR = obj
OBJS = $(RAW_SRCS:%=$(OBJ_DIR)/%.o)
OBJ_DIRS := $(sort $(dir $(OBJS)))

PROJECT_DIR = ..
PROJECT = $(PROJECT_DIR)/sifl
CPPFLAGS += -I$(PROJECT_DIR)

RAW_PROJECT_OBJS = check_args \

PROJECT_OBJS = $(RAW_PROJECT_OBJS:%=$(PROJECT_DIR)/$(OBJ_DIR)/%.o)

NAME = tests

.PHONY: all clean fclean re project 

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(GTEST_BUILD_DIR)
	$(MAKE) -C $(PROJECT_DIR) fclean

re: fclean all
	$(MAKE) -C $(PROJECT_DIR) re

$(NAME): $(PROJECT) $(OBJS) $(GTEST_LIB) $(GTEST_MAIN_LIB)
	echo "Current working directory: $$(pwd)"
	ls "$$(pwd)/.."
	$(CXX) $(LDFLAGS) $(OBJS) $(PROJECT_OBJS) -o $@ $(LDLIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIRS)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

$(GTEST_BUILD_DIR):
	mkdir -p $(GTEST_BUILD_DIR)
	cmake -S $(GTEST_DIR) -B $(GTEST_BUILD_DIR)
	$(MAKE) -C $(GTEST_BUILD_DIR)

$(GTEST_LIB): $(GTEST_BUILD_DIR)
	$(MAKE) -C $(GTEST_BUILD_DIR)

$(GTEST_MAIN_LIB): $(GTEST_LIB)

$(PROJECT):
	$(MAKE) -C $(PROJECT_DIR)

$(PROJECT_OBJS): $(PROJECT)

-include $(OBJS:.o=.d)

$(OBJ_DIRS):
	mkdir -p $@
