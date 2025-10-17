CC = gcc
CFLAGS = -Wall -std=c89
SRC_DIR = challenges
BIN_DIR = build

SRC = $(wildcard $(SRC_DIR)/*.c)
BIN = $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SRC))

all: $(BIN)

$(BIN_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BIN_DIR)

.PHONY: all clean
