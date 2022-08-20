#include "compiler.h"

#include <stdio.h>

#include "common.h"
#include "scanner.h"
#include "chunk.h"

bool compile(const char* source, Chunk* chunk) {
  initScanner(source);
  advance();
  expression();
  consume(TOKEN_EOF, "Expected end of expression.");
}