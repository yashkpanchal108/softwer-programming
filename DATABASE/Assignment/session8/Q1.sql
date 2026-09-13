//Write a PL/SQL block that declares two variables: one for a user's name (VARCHAR2) and one for their age (NUMBER). Assign values and print both using DBMS_OUTPUT.PUT_LINE.

SET SERVEROUTPUT ON;

DECLARE
    user_name VARCHAR2(50);
    user_age NUMBER;
BEGIN
    user_name := 'Ayan';
    user_age := 20;

    DBMS_OUTPUT.PUT_LINE('User Name: ' || user_name);
    DBMS_OUTPUT.PUT_LINE('Age: ' || user_age);
END;
/

