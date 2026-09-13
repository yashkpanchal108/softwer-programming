//Write a PL/SQL block that uses a simple LOOP to print the numbers 1 to 5 using DBMS_OUTPUT.PUT_LINE.<br><br><em><strong>Hint:</strong> Use a counter variable and EXIT WHEN condition inside the loop.</em>


SET SERVEROUTPUT ON;

DECLARE
    counter NUMBER := 1;
BEGIN
    LOOP
        DBMS_OUTPUT.PUT_LINE(counter);

        EXIT WHEN counter = 5;

        counter := counter + 1;
    END LOOP;
END;
/