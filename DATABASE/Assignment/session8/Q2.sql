//Create a PL/SQL block that uses an IF statement to check if a given order amount is above 500. If yes, print 'Eligible for free delivery', else print 'Delivery charges apply'.

SET SERVEROUTPUT ON;

DECLARE
    order_amount NUMBER := 600;
BEGIN
    IF order_amount > 500 THEN
        DBMS_OUTPUT.PUT_LINE('Eligible for free delivery');
    ELSE
        DBMS_OUTPUT.PUT_LINE('Delivery charges apply');
    END IF;
END;
/