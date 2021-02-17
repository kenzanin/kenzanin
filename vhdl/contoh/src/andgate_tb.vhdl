ENTITY andgate_tb IS
END ENTITY andgate_tb;

ARCHITECTURE behave OF andgate_tb IS
    COMPONENT andgate
        PORT (
            in1, in2 : IN BIT;
            out1 : OUT BIT
        );
    END COMPONENT;
    FOR and_0 : andgate USE ENTITY work.andgate;
    SIGNAL in1, in2, out1 : BIT;
BEGIN
    and_0 : andGate PORT MAP(
        in1 => in1,
        in2 => in2,
        out1 => out1
    );

    PROCESS
        TYPE pattern_type IS RECORD
            in1, in2 : BIT;
        END RECORD;
        TYPE pattern_array IS ARRAY (NATURAL RANGE <>) OF pattern_type;
        CONSTANT pattern : pattern_array :=
        (
        ('0', '0'),
        ('0', '1'),
        ('1', '0'),
        ('1', '1')
        );
    BEGIN
        FOR i IN pattern'RANGE LOOP
            in1 <= pattern(i).in1;
            in2 <= pattern(i).in2;
            WAIT FOR 1 ns;
        END LOOP;
        ASSERT FALSE REPORT "Selesai." SEVERITY note;
        WAIT;
    END PROCESS;
END ARCHITECTURE behave;