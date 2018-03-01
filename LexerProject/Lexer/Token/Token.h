#ifndef TOKEN_TOKEN_H
#define TOKEN_TOKEN_H

enum class Token
{
	// Arithmetic operators
	PLUS,
	MINUS,
	MULTIPLY,
	DIVISION,

	// Assignment operators
	ASSIGNMENT,
	PLUS_ASSIGNMENT,
	MINUS_ASSIGNMENT,
	MULTIPLY_ASSIGNMENT,
	DIVISION_ASSIGNMENT,

	// Comparison operators
	EQUIVALENCE,
	NOT_EQUIVALENCE,
	MORE_OR_EQUIVALENCE,
	LESS_OR_EQUIVALENCE,
	MORE,
	LESS,

	// Keywords
	CLASS,
	EXTENDS,
	IMPLEMENTS,
	CONSTRUCTOR,
	NOT_INITIALIZED,
	PRIVATE,
	PUBLIC,
	GET,
	SET,
	FOR,
	WHILE,
	DO,
	RETURN,
	IF,
	ELSE,

	// Numbers
	INTEGER,
	FLOAT,
	EXPONENTIAL,

	// Separator
	COLON,
	COMMA,
	DOT,
	SEMICOLON,

	// Parentheses
	LEFT_SQUARE_BRACKET,
	RIGHT_SQUARE_BRACKET,

	LEFT_ROUND_BRACKET,
	RIGHT_ROUND_BRACKET,

	LEFT_CURLY_BRACKET,
	RIGHT_CURLY_BRACKET,

	// Other
	TYPE,
	IDENTIFIER,
	STRING_LITERAL,
	CHARACTER_LITERAL,
	UNKNOWN
};

#endif //PROJECT_TOKEN_H
