//Use ChatGPT to generate a SQL test scenario where a trigger incorrectly updates a user's balance after an expense entry. 
//Paste the scenario and your corrected trigger code, explaining how you fixed the error.
//<br><br><em><strong>Hint:</strong> Ask ChatGPT for a buggy trigger example and a test case that exposes the bug.</em>

DELIMITER //

CREATE TRIGGER deduct_balance_buggy
AFTER INSERT ON Transactions
FOR EACH ROW
BEGIN
    UPDATE Wallet
    SET balance = balance - NEW.amount
    WHERE user_id = NEW.user_id;
END //

DELIMITER ;
