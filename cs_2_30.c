int tadd_ok(int x, int y) {
    if (a > 0 && b > 0) 
        return a + b <= 0;
    else if (a < 0 && b < 0) 
        return a + b >= 0;
    else return 1;
}
