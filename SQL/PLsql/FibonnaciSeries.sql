CREATE OR REPLACE FUNCTION fibonacci(num integer) RETURNS SETOF numeric AS $$

DECLARE
fib1 numeric := 0;
fib2 numeric := 1;
BEGIN
IF (num <= 0)
THEN RETURN;
END IF;
RETURN NEXT fib1;
LOOP
EXIT WHEN num <= 1;
RETURN NEXT fib2;
num = num - 1;
SELECT fib2, fib1 + fib2 INTO fib1, fib2;
END LOOP;
END;

$$ language plpgsql;

select fibonacci(12);
