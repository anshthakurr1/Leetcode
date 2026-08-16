bool stoneGameIX(int* stones, int stonesSize) {
    int count[3] = {0, 0, 0};

    // Count remainders
    for (int i = 0; i < stonesSize; i++) {
        count[stones[i] % 3]++;
    }

    // Number of 0-remainder stones is even
    if (count[0] % 2 == 0) {
        return count[1] > 0 && count[2] > 0;
    }

    // Number of 0-remainder stones is odd
    int diff = count[1] - count[2];

    if (diff < 0)
        diff = -diff;

    return diff > 2;
}