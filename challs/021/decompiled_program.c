ulong main(void)

{
    int64_t iVar1;
    char acStack_128 [264];
    char *pcStack_20;
    int32_t iStack_14;
    int32_t iStack_10;
    int32_t iStack_c;
    
    pcStack_20 = "$uperZecretP4zz";
    iStack_c = 0;
    iStack_10 = 1;
    sym.imp.printf("Enter passwd: ");
    sym.imp.__isoc99_scanf(0x2023, acStack_128);
    iVar1 = sym.imp.strlen(acStack_128);
    if (iVar1 == 6) {
        if (acStack_128[0] == 'P') {
            for (iStack_14 = 1; iStack_14 < 6; iStack_14 = iStack_14 + 1) {
                iStack_c = iStack_c + acStack_128[iStack_14] + -0x30;
                iStack_10 = iStack_10 * (acStack_128[iStack_14] + -0x30);
            }
            if ((iStack_c == 0x18) && (iStack_10 == 0x800)) {
                if (acStack_128[1] == '8') {
                    sym.imp.printf("Correct");
                }
                else {
                    sym.imp.printf("really close");
                }
            }
            else {
                sym.imp.printf("Close");
            }
        }
        else {
            sym.imp.printf("Almost");
        }
    }
    else {
        sym.imp.printf("Incorrect");
    }
    return 0;
}
