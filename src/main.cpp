#include "main.h"

int main() {
	const char* source = "x = 4 + 5";
    Lexer lexer;
    Token tokens[] = lexer.lex(source);
    for (int i=0;i<length(tokens);i++) {
        cout << tokens[i] << endl;
    }
}
