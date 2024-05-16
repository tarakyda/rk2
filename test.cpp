#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Interpreter.h"

TEST_CASE("Test Interpreter Pattern") {
    Context context;

    Expression* expression1 = new TerminalExpression("Hello");
    Expression* expression2 = new TerminalExpression("World");
    Expression* orExpression = new OrExpression(expression1, expression2);

    REQUIRE(orExpression->interpret(context) == false);

    Expression* expression3 = new TerminalExpression("Hello");
    Expression* andExpression = new AndExpression(expression1, expression3);

    REQUIRE(andExpression->interpret(context) == true);
}

