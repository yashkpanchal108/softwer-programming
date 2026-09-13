//Write a PL/SQL block that tries to divide two numbers entered as variables. If a division by zero occurs, catch the exception and print 'Cannot divide by zero'. Otherwise, print the result.

SET SERVEROUTPUT ON;

DECLARE
    num1 NUMBER := 100;
    num2 NUMBER := 0;
    result NUMBER;
BEGIN
    result := num1 / num2;

    DBMS_OUTPUT.PUT_LINE('Result: ' || result);

EXCEPTION
    WHEN ZERO_DIVIDE THEN
        DBMS_OUTPUT.PUT_LINE('Cannot divide by zero');
END;
/
