int factorial_iter(int n) {
    int k, v = 1;
    for (k = n; k > 0; k--)
        v *= k;
    return v;
}