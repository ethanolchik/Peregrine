#ifndef PEREGRINE_LEXER
#define PEREGRINE_LEXER
#include "tokens.hpp"
#include <string>
#include <vector>
#define INTEGER unsigned long int
std::string next(size_t index, std::vector<std::string> code);
std::vector<std::string> split(std::string code);
std::vector<Token> lexer(std::vector<std::string> charecters);
Token token_init(std::string keyword, TokenType tk_type, INTEGER start = 0,
                 INTEGER end = 0, INTEGER line = 1);
#endif