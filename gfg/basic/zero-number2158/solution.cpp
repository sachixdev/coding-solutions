bool check_duck(string num) {
    if (num[0] == '0') {
        return false;   // Leading zero -> not a Duck number
    }

    for (int i = 1; i < num.length(); i++) {
        if (num[i] == '0') {
            return true;   // Zero found after first digit
        }
    }

    return false;   // No zero found
}