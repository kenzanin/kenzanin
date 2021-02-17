ENTITY andgate IS
    PORT (
        in1, in2 : IN BIT;
        out1 : OUT BIT);
END ENTITY;

ARCHITECTURE rtl OF andgate IS
BEGIN
    out1 <= in1 AND in2;
END ARCHITECTURE rtl;